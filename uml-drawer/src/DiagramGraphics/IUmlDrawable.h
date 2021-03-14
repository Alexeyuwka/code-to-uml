#ifndef UML_DRAWER_IUMLDRAWABLE_H
#define UML_DRAWER_IUMLDRAWABLE_H

#include <QPainter>

class IUmlDrawable
{
public:
    virtual void draw(QPainter* painter) = 0;

    virtual ~IUmlDrawable() = default;
};

#endif //UML_DRAWER_IUMLDRAWABLE_H
