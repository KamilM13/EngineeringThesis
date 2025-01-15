#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int speed READ speed WRITE setSpeed NOTIFY speedChanged)
    Q_PROPERTY(QString speedColorWarning READ speedColorWarning WRITE setSpeedColorWarning NOTIFY speedColorWarningChanged)
    Q_PROPERTY(int batteryLevel READ batteryLevel WRITE setBatteryLevel NOTIFY batteryLevelChanged)
    Q_PROPERTY(QString batteryColorWarning READ batteryColorWarning WRITE setBatteryColorWarning NOTIFY batteryColorWarningChanged)
    Q_PROPERTY(bool rightBlinker READ rightBlinker WRITE setRightBlinker NOTIFY rightBlinkerChanged)
    Q_PROPERTY(bool leftBlinker READ leftBlinker WRITE setLeftBlinker NOTIFY leftBlinkerChanged)
    Q_PROPERTY(float speedometerAngle READ speedometerAngle WRITE setSpeedometerAngle NOTIFY speedometerAngleChanged)
    Q_PROPERTY(int stickState READ stickState WRITE setStickState NOTIFY stickStateChanged)
    Q_PROPERTY(QString stickStateString READ stickStateString WRITE setStickStateString NOTIFY stickStateStringChanged)
    Q_PROPERTY(bool lightsState READ lightsState WRITE setLightsState NOTIFY lightsStateChanged)
    Q_PROPERTY(bool distanceWarning READ distanceWarning WRITE setDistanceWarning NOTIFY distanceWarningChanged)

public:
    explicit System(QObject *parent = nullptr);

    int speed() const;
    void setSpeed(int speed);

    QString speedColorWarning() const;
    void setSpeedColorWarning(QString speedColorWarning);

    int batteryLevel() const;
    void setBatteryLevel(int batteryLevel);

    QString batteryColorWarning() const;
    void setBatteryColorWarning(QString batteryColorWarning);

    bool rightBlinker() const;
    void setRightBlinker(bool rightBlinker);

    bool leftBlinker() const;
    void setLeftBlinker(bool leftBlinker);

    float speedometerAngle() const;
    void setSpeedometerAngle(float speedometerAngle);

    int stickState() const;
    void setStickState(int stickState);

    QString stickStateString() const;
    void setStickStateString(QString stickStateString);

    bool lightsState() const;
    void setLightsState(bool lightsState);

    bool distanceWarning() const;
    void setDistanceWarning(bool distanceWarning);

signals:
    void speedChanged(int speed);
    void speedColorWarningChanged(QString speedColorWarning);
    void batteryLevelChanged(int batteryLevel);
    void batteryColorWarningChanged(QString batteryColorWarning);
    void rightBlinkerChanged(bool rightBlinker);
    void leftBlinkerChanged(bool leftBlinker);
    void speedometerAngleChanged(float speedometerAngle);
    void stickStateChanged(int stickState);
    void stickStateStringChanged(QString stickStateString);
    void lightsStateChanged(bool lightsState);
    void distanceWarningChanged(bool distanceWarning);

private:
    int m_speed;
    QString m_speedColorWarning;
    int m_batteryLevel;
    QString m_batteryColorWarning;
    bool m_rightBlinker;
    bool m_leftBlinker;
    float m_speedometerAngle;
    int m_stickState;
    QString m_stickStateString;
    bool m_lightsState;
    bool m_distanceWarning;
};

#endif // SYSTEM_H
