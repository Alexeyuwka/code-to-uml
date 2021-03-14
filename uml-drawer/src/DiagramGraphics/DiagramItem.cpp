#include "DiagramItem.h"

#include <QPainter>

#include "IUmlDrawable.h"
#include "SimpleRectangle.h"

DiagramItem::DiagramItem(QQuickItem *parent) : QQuickPaintedItem(parent) { }

void DiagramItem::paint(QPainter *painter) {
    if (!painter)
    {
        qDebug("QPainter in Diagram item is nullptr.");

        return;
    }

    if (itemsToDraw.empty())
    {
        return;
    }

    for(IUmlDrawable* itemToDraw : itemsToDraw)
    {
        if (!itemToDraw)
        {
            continue;
        }

        itemToDraw->draw(painter);
    }
}

void DiagramItem::addItemToDraw(IUmlDrawable *drawable) {
    if (!drawable)
    {
        return;
    }

    itemsToDraw.push_back(drawable);
}

DiagramItem::~DiagramItem()
{
    for(IUmlDrawable* itemToDraw : itemsToDraw)
    {
        delete itemToDraw;
    }

    itemsToDraw.clear();
}