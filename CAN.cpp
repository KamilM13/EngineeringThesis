#include "CAN.h"
#include "System.h"


CAN::CAN() {
    CanInit();
}

CAN::~CAN() {}

bool CAN :: CanInit()
{
    const char* can_interface = "can0";

    struct sockaddr_can addr;
    struct ifreq ifr;
    if (can_socket == -1)
    {
        return false;
    }
    strcpy(ifr.ifr_name, can_interface);
    ioctl(can_socket, SIOCGIFINDEX, &ifr);

    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;

    if(bind(can_socket, (struct sockaddr*)&addr, sizeof(addr)) == -1)
    {
        return true;
    }
    return false;
}

CANFrame CAN :: readFrame(System& system)
{
    struct can_frame frame;
    ssize_t nbytes = read(can_socket, &frame, sizeof(struct can_frame));

    std::cout << "ID: 0x" << std::hex << frame.can_id << std::dec << std::endl;

    std::cout << "Data:";
    for (int i=0; i < frame.can_dlc; i++)
    {
        std::cout << ' ' << std::hex << static_cast<int>(frame.data[i]);
    }
    switch(frame.can_id) {
    case (0x12):
        system.setDistanceWarning(convertRawToActual(*reinterpret_cast<uint16_t*>(frame.data), nullptr));
        break;
    case (0x13):
        system.setSpeed(convertRawToActual(*reinterpret_cast<uint16_t*>(frame.data), nullptr));
        break;
    default: break;
    }
    std::cout << std::endl;
}

double CAN::convertRawToActual(uint16_t rawValue, const MsgInfo* msgInfo)
{
    double factor = msgInfo->msgFactor;
    double offset = msgInfo->msgOffset;

    double actualValue = rawValue * factor + offset;

    return actualValue;
}


