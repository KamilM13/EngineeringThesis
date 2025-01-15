#ifndef DBC_H
#define DBC_H

#include "Enums.h"
#include <stdint.h>

struct msgReceived
{
    uint32_t canId;
    uint8_t data[8];
};

struct MsgInfo
{
    uint32_t msgCanID;
    messages msgId;
    uint8_t m_startBit;
    uint8_t msgLength;
    double msgFactor;
    double msgOffset;
    double msgMin;
    double msgMax;
};

const MsgInfo MsgInfoTab[totalSignals]
{
    {0x12, sigDistanceWarning, 0, 1, 1, 0, 0, 1},
    {0x13, sigSpeed, 0, 3, 1, 0, 0, 220},
};

#endif // DBC_H
