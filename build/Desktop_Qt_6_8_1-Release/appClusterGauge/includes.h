#ifndef INCLUDES_H
#define INCLUDES_H

#include <cstdint>
#include <unistd.h>
#include <sys/socket.h>
#include <net/if.h>
#include "linux/can.h"
#include "linux/can/raw.h"
#include <sys/ioctl.h>

struct CANFrame {
    canid_t canId;
    uint8_t data[8];
};

#endif // INCLUDES_H
