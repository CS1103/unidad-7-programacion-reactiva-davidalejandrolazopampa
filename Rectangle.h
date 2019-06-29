//
// Created by David Lazo on 29/06/2019.
//

#ifndef UNIDAD7LAZO_RECTANGLE_H
#define UNIDAD7LAZO_RECTANGLE_H
#include "Component.h"

class Rectangle: public Component  {
    int x,y;
    int width,height;
public:
    Rectangle(int x1,int y1,int width1,int height1):x(x1),y(y1),width(width1),height(height1){};
    Rectangle()= default;
    void get_all()override{
        cout<<x<<endl<<y<<endl<<width<<endl<<height<<endl;
    }
    void OnClick(function<void(Event)>)override{}
    void onMouseMove(function<void(Event)>)override{}
    void draw()override{}
};

#endif //UNIDAD7LAZO_RECTANGLE_H
