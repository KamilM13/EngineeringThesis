#ifndef CAN_H
#define CAN_H

#include <string.h>
#include <iostream>
#include <stdint.h>
#include "DBC.h"
#include "includes.h"
#include "System.h"



class CAN
{
private:
    const char* can0 = "can0";
    const int can_socket = socket(PF_CAN, SOCK_RAW, CAN_RAW);
public:
    CAN();
    ~CAN();

    bool CanInit();

    CANFrame readFrame(System& system);

    double convertRawToActual(uint16_t rawValue, const MsgInfo* msgInfo);

    void run();

};

#endif // CAN_H
