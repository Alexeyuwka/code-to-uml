#ifndef UML_DRAWER_DIAGRAMITEM_H
#define UML_DRAWER_DIAGRAMITEM_H

#include <QQuickPaintedItem>

class IUmlDrawable;

class DiagramItem : public QQuickPaintedItem {
    Q_OBJECT
    QML_ELEMENT
public:
    DiagramItem(QQuickItem* parent = nullptr);
    void paint(QPainter *painter) override;
    void addItemToDraw(IUmlDrawable* drawable);

    ~DiagramItem() override;

private:
    QList<IUmlDrawable*> itemsToDraw;
};


#endif //UML_DRAWER_DIAGRAMITEM_H