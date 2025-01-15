#ifndef INCLUDES_H
#define INCLUDES_H

#include <cstdint>
#include <unistd.h>
//zawiera definicje struktur zwiazanych z socketami
#include <sys/socket.h>
//zawiera definicje zwiazane z interfejsem sieciowym
#include <net/if.h>
//zawiera definicje zwiazane z wartowa protokołu CAN
#include "linux/can.h"
//zawiera definicje definicje dla surowego interfejsu CAN
#include "linux/can/raw.h"
//do ioctl
#include <sys/ioctl.h>

struct CANFrame {
    canid_t canId;
    uint8_t data[8];
};

#endif // INCLUDES_H
