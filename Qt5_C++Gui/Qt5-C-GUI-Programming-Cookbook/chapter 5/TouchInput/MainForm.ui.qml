import QtQuick 2.5
import QtQuick.Controls 1.3
import QtQuick.Window 2.2

Rectangle {
    id: window

    width: 360
    height: 360
    property alias touchArea: touchArea
    property alias tux: tux

    MultiPointTouchArea {
        id: touchArea
        anchors.fill: parent
        touchPoints: [
            TouchPoint { id: point1 },
            TouchPoint { id: point2 }
        ]
    }

    Image {
        id: tux
        x: (window.width / 2) - (tux.width / 2)
        y: (window.height / 2) - (tux.height / 2)
        width: 200
        height: 220
        fillMode: Image.Tile
        source: "tux.png"
    }
}
