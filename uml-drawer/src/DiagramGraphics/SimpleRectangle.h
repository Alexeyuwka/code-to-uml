#ifndef UML_DRAWER_SIMPLERECTANGLE_H
#define UML_DRAWER_SIMPLERECTANGLE_H

#include "IUmlDrawable.h"

class SimpleRectangle : public IUmlDrawable
{
public:
    SimpleRectangle(const QPoint &position, const QSize &size) : position(position), size(size) {}

    void draw(QPainter *painter) override {
        QBrush brush(Qt::red);
        painter->fillRect(position.x(), position.y(), size.width(), size.height(), brush);
    }

private:
    QPoint position;
    QSize size;
};

#endif //UML_DRAWER_SIMPLERECTANGLE_H