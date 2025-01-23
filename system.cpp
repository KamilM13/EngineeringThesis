#include "inc/system.h"

System::System(QObject *parent) : QObject(parent)
{
}

int System::speed() const
{
    return m_speed;
}

void System::setSpeed(int speed)
{
    if (m_speed != speed) {
        if (speed >= 0) {
            m_speed = speed;
            setSpeedColorWarning("#ffffff");
            setSpeedometerAngle(m_speed);
        } else {
            m_speed = 0;
            setSpeedColorWarning("#ffff00");
            setSpeedometerAngle(m_speed);

        }
        emit speedChanged(m_speed);
    }
}

QString System::speedColorWarning() const
{
    return m_speedColorWarning;
}

void System::setSpeedColorWarning(QString speedColorWarning)
{
    if (m_speedColorWarning != speedColorWarning) {
        m_speedColorWarning = speedColorWarning;
        emit speedColorWarningChanged(m_speedColorWarning);
    }
}

int System::batteryLevel() const
{
    return m_batteryLevel;
}

void System::setBatteryLevel(int batteryLevel)
{
    if (m_batteryLevel != batteryLevel) {
        if (batteryLevel >= 0 && batteryLevel <= 100) {
            m_batteryLevel = batteryLevel;
            setBatteryColorWarning("#ffffff");
        } else if (batteryLevel < 0) {
            m_batteryLevel = 0;
            setBatteryColorWarning("#ffff00");
        } else {
            m_batteryLevel = 100;
            setBatteryColorWarning("#ffff00");
        }
        emit batteryLevelChanged(m_batteryLevel);
    }
}

QString System::batteryColorWarning() const
{
    return m_batteryColorWarning;
}

void System::setBatteryColorWarning(QString batteryColorWarning)
{
    if (m_batteryColorWarning != batteryColorWarning) {
        m_batteryColorWarning = batteryColorWarning;
        emit batteryColorWarningChanged(m_batteryColorWarning);
    }
}

bool System::rightBlinker() const
{
    return m_rightBlinker;
}


void System::setRightBlinker(bool rightBlinker)
{
    if (m_rightBlinker != rightBlinker) {
        m_rightBlinker = rightBlinker;
        emit rightBlinkerChanged(m_rightBlinker);
    }
}

bool System::leftBlinker() const
{
    return m_leftBlinker;
}

void System::setLeftBlinker(bool leftBlinker)
{
    if (m_leftBlinker != leftBlinker) {
        m_leftBlinker = leftBlinker;
        emit leftBlinkerChanged(m_leftBlinker);
    }
}

float System::speedometerAngle() const
{
    return m_speedometerAngle;
}

void System::setSpeedometerAngle(float speedometerAngle)
{
    speedometerAngle = -107 + 107 * speedometerAngle / 90;
    if (m_speedometerAngle != speedometerAngle) {
        if (speedometerAngle >107)
        {
            m_speedometerAngle = 107;
        }
        else if (speedometerAngle < -107)
        {
            m_speedometerAngle = -107;
        }
        else
        {
            m_speedometerAngle = speedometerAngle;
        }
        emit speedometerAngleChanged(m_speedometerAngle);
    }
}


QString System::stickStateString() const
{
    return m_stickStateString;
}

void System::setStickStateString(QString stickStateString)
{
    if (m_stickStateString != stickStateString) {
        m_stickStateString = stickStateString;
        emit stickStateStringChanged(m_stickStateString);
    }
}

int System::stickState() const
{
    return m_stickState;
}


void System::setStickState(int stickState)
{
    if (m_stickState != stickState) {
        m_stickState = stickState; // Update the integer stick state
        if (m_stickState == 0) {
            setStickStateString("P"); // Park
        } else if (m_stickState == 1) {
            setStickStateString("R"); // Reverse
        } else if (m_stickState == 2) {
            setStickStateString("N"); // Neutral
        } else if (m_stickState == 3) {
            setStickStateString("D"); // Drive
        } else {
            setStickStateString("E"); // Error or Unknown state
        }


        // Emit signal for the string representation of the stick state
        emit stickStateChanged(m_stickState);
    }
}

bool System::lightsState() const
{
    return m_lightsState;
}

void System::setLightsState(bool lightsState)
{
    if (m_lightsState != lightsState) {
        m_lightsState = lightsState;
        emit lightsStateChanged(m_lightsState);
    }
}


bool System::distanceWarning() const
{
    return m_distanceWarning;
}

void System::setDistanceWarning(bool distanceWarning)
{
    if (m_distanceWarning != distanceWarning) {
        m_distanceWarning = distanceWarning;
        emit distanceWarningChanged(m_distanceWarning);
    }
}
