import QtQuick 2.0
import Sailfish.Silica 1.0
import TelegramModels 1.0
import tdlibQtEnums 1.0

Item {
    width: messageListItem.width
    height: Theme.itemSizeSmall
    x:Theme.horizontalPageMargin/2

    Rectangle {
        width: newMessagesLabel.width + 4*Theme.paddingLarge
        height: newMessagesLabel.height + 1*Theme.paddingLarge
        anchors.centerIn: parent
        radius: 90
        gradient: Gradient {
            GradientStop { position: 0.0; color: Theme.rgba(Theme.highlightBackgroundColor, 0.10) }
            GradientStop { position: 1.0; color: Theme.rgba(Theme.highlightBackgroundColor, 0.30) }
        }

        Label {
            id: newMessagesLabel
            anchors.centerIn: parent
            text: qsTr("New messages")
            font.pixelSize: Theme.fontSizeTiny
            font.bold: true
        }
    }
}

