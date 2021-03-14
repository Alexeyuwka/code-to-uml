#include "ApplicationWrapper.h"

#include <QQmlContext>
#include <QQuickItem>

#include "DiagramGraphics/DiagramItem.h"
#include "DiagramGraphics/SimpleRectangle.h"

ApplicationWrapper::ApplicationWrapper(int &argc, char **argv) : QGuiApplication(argc, argv)
{
    qmlRegisterType<DiagramItem>("external.qmlcomponent", 1, 0, "DiagramItem");

    applicationEngine.load(QUrl(QStringLiteral("qrc:/qml/application.qml")));

    testRectangleDrawing();
}

void ApplicationWrapper::testRectangleDrawing() {

    DiagramItem* diagramItem = qobject_cast<DiagramItem*>(getQuickItemById("mainDiagram"));

    diagramItem->addItemToDraw(new SimpleRectangle(QPoint(0, 0), QSize(250, 150)));
}

QQuickItem *ApplicationWrapper::getQuickItemById(QString itemId) {

    auto rootObject = applicationEngine.rootObjects()[0];

    if (!rootObject)
    {
        qDebug() << "[Error] QML root object for main application is nullptr.";

        return nullptr;
    }

    return rootObject->findChild<QQuickItem*>(itemId);
}
