import QtQuick 2.15
import QtQuick.Controls 2.15

Window {
    visible: true
    id: root
    width: 1024
    height: 600
    color: "#000000"
    property var filepath: "file:///home/kamil/Desktop/thesis/ClusterGauge/"

    Image {
        id: base
        x: 37
        y: 30
        width: 951
        height: 540
        source: filepath + "assets/base.png"
        fillMode: Image.PreserveAspectFit

        Text {
            id: speedVariable
            anchors.right: base.right
            anchors.rightMargin: 420
            anchors.bottom: base.bottom
            anchors.bottomMargin: 100
            width: 89
            height: 68
            color: systemObject.speedColorWarning
            text: systemObject.speed // CAN CONTROLLED
            font.pixelSize: 80
            horizontalAlignment: Text.AlignRight

            Text {
                id: speed_unit
                x: 105
                y: 60
                color: "#ffffff"
                text: qsTr("km/h") // probably a setting in the future but who the fuck uses mph
                font.pixelSize: 20
            }
        }
    }

    Image {
        id: dial
        x: 490
        y: 114
        width: 46
        height: 203
        source: filepath + "assets/needle.png"
        transform: Rotation { origin.x: 23; origin.y: 185.5; axis { x: 0; y: 0; z: 1 } angle: systemObject.speedometerAngle } // CONTROLLED BY SPEED
    }



    Image {
        id: rightBlinker
        x: 630
        y: 400
        width: 50
        height: 50
        source: filepath + "assets/right.png"
        visible: systemObject.rightBlinker // CAN CONTROLLED
    }

    Image {
        id: leftBlinker
        x: 360
        y: 400
        width: 50
        height: 50
        source: filepath + "assets/left.png"
        visible: systemObject.leftBlinker // CAN CONTROLLED
    }

    Text {
        id: stickStateDisplay
        x: 100
        y: 50
        color: "#ffffff"
        text: systemObject.stickStateString // CAN CONTROLLED
        font.pixelSize: 60
    }

    Image {
        id: lightsStateDisplay
        x: 100
        y: 400
        width: 80
        height: 80
        source: filepath + "assets/headlight.png"
        visible: systemObject.lightsState // CAN CONTROLLED
    }



    Text {
        id: batteryDisplay
        x: 850
        y: 50
        color: systemObject.batteryColorWarning
        text: systemObject.batteryLevel + "%" // CAN CONTROLLED
        font.pixelSize: 60
    }

    Image {
        id: distanceWarningDisplay
        x: 850
        y: 400
        width: 100
        height: 100
        source: filepath + "assets/distance.png"
        visible: systemObject.distanceWarning // CAN CONTROLLED
    }
}
