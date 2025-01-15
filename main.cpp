#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QTimer>
#include <iostream>
#include <iomanip>
#include <thread>
#include <string>
#include "System.h"
#include "CAN.h"



void customMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    if (type != QtDebugMsg) {
        QByteArray localMsg = msg.toLocal8Bit();
        fprintf(stderr, "%s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
    }
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    System system;

    // CAN can;

    // setting starting values for unit tests
    system.setSpeed(90);
    system.setBatteryLevel(50);
    system.setStickState(2);
    system.setDistanceWarning(1);
    system.setRightBlinker(1);
    system.setLightsState(1);
    system.setLeftBlinker(1);
    // while (1)
    // {
    //     can.readFrame(system);
    // }
    // // Speed and needle unit test
    // QObject::connect(&system, &System::speedChanged, [](const int& speednum) {
    //     qDebug() << "Speed:" << speednum;
    // });

    // QObject::connect(&system, &System::speedometerAngleChanged, [](const float& speedangle) {
    //     qDebug() << "Speedometer angle:" << speedangle;
    // });

    // system.setSpeed(-1);
    // system.setSpeed(0);
    // system.setSpeed(1);
    // system.setSpeed(90);
    // system.setSpeed(179);
    // system.setSpeed(180);
    // system.setSpeed(181);

    // // Battery level unit test
    // QObject::connect(&system, &System::batteryLevelChanged, [](const int& level) {
    //     qDebug() << "Battery level:" << level;
    // });

    // system.setBatteryLevel(-1);
    // system.setBatteryLevel(0);
    // system.setBatteryLevel(1);
    // system.setBatteryLevel(50);
    // system.setBatteryLevel(99);
    // system.setBatteryLevel(100);
    // system.setBatteryLevel(101);

    // Gear indicator unit test
    // QObject::connect(&system, &System::stickStateStringChanged, [](const QString& state) {
    //     qDebug() << "Stick state (string):" << state;
    // });

    // system.setStickState(-1);
    // system.setStickState(0);
    // system.setStickState(1);
    // system.setStickState(2);
    // system.setStickState(3);
    // system.setStickState(4);

    // // Distance sensor unit test
    // QObject::connect(&system, &System::distanceWarningChanged, [](const bool& diswar) {
    //     qDebug() << "Distance warning (boolean):" << diswar;
    // });

    // system.setDistanceWarning(0);
    // system.setDistanceWarning(1);

    // QObject::connect(&system, &System::rightBlinkerChanged, [](const bool& rblink) {
    //     qDebug() << "Right blinker (boolean):" << rblink;
    // });

    // system.setRightBlinker(0);
    // system.setRightBlinker(1);

    // QObject::connect(&system, &System::leftBlinkerChanged, [](const bool& lblink) {
    //     qDebug() << "Left blinker (boolean):" << lblink;
    // });

    // system.setLeftBlinker(0);
    // system.setLeftBlinker(1);


    // QObject::connect(&system, &System::lightsStateChanged, [](const bool& lights) {
    //     qDebug() << "Lights (boolean):" << lights;
    // });

    // system.setLightsState(0);
    // system.setLightsState(1);


    // Set context for QML
    engine.rootContext()->setContextProperty("systemObject", &system);

    // Load the QML file
    qDebug() << "Loading QML...";
    engine.load(QUrl(QStringLiteral("qrc:/qt/qml/appClusterGauge/Main.qml")));
    qDebug() << "Loaded QML with root objects:" << engine.rootObjects();
    if (engine.rootObjects().isEmpty()) {
        qCritical() << "Failed to load QML!";
        return -1;
    }

    // qInstallMessageHandler(customMessageHandler);
    // // Rapid live test of the needle and speed variable tracking changing data
    // QTimer speedTimer;
    // QObject::connect(&speedTimer, &QTimer::timeout, [&system]() {
    //     static int c_speed = 0;
    //     static bool uptick = true;
    //     if (c_speed < 180 && uptick) {
    //         c_speed += 1;
    //     } else if (c_speed == 180) {
    //         c_speed -= 1;
    //         uptick = false;
    //     } else if (c_speed > 0 && !uptick) {
    //         c_speed -= 1;
    //     } else {
    //         c_speed += 1;
    //         uptick = true;
    //     }
    //     system.setSpeed(c_speed);
    // });
    // speedTimer.start(25); // Update speed every 10ms

    // // Create a QTimer to blink the blinkers every 500ms
    // QTimer blinkerTimer;
    // QObject::connect(&blinkerTimer, &QTimer::timeout, [&system]() {
    //     static bool blinkerState = false;
    //     blinkerState = !blinkerState;
    //     system.setRightBlinker(blinkerState);
    //     system.setLeftBlinker(blinkerState);
    // });
    // blinkerTimer.start(500); // Blink blinkers every 500ms

    return app.exec();
}
