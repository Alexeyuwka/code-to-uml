#ifndef UML_DRAWER_APPLICATIONWRAPPER_H
#define UML_DRAWER_APPLICATIONWRAPPER_H

#include <QGuiApplication>
#include <QQmlApplicationEngine>

class QQuickItem;

class ApplicationWrapper : public QGuiApplication {
public:
    ApplicationWrapper(int &argc, char **argv);

private:
    void testRectangleDrawing();
    QQuickItem* getQuickItemById(QString itemId);

    QQmlApplicationEngine applicationEngine;
};

#endif //UML_DRAWER_APPLICATIONWRAPPER_H