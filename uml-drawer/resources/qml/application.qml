import QtQuick
import QtQuick.Controls
import external.qmlcomponent

ApplicationWindow {
    id: mainWindow
    title: "UML drawer"
    width: 1080
    height: 720

    minimumWidth: 640
    minimumHeight: 480

    property int menuBarHeight: 40
    property var borderColor: "lightgray"

    visible: true

    Column
    {
        spacing: 0.1

        Rectangle
        {
            id: menuBar
            width: mainWindow.width
            height: menuBarHeight
            border.color: borderColor
        }

        Row
        {
            spacing: 0.1

            Rectangle
            {
                id: menuList
                width: 0.25 * (mainWindow.width)
                height: mainWindow.height - menuBar.height
                color: "green"
                border.color: borderColor
            }

            Rectangle
            {
                width: 0.75 * (mainWindow.width)
                height: mainWindow.height - menuBar.height
                color: "white"
                border.color: borderColor

                DiagramItem
                {
                    objectName: "mainDiagram"
                    width: parent.width; height: parent.height
                }
            }
        }
    }
}