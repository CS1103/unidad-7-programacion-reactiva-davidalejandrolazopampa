//
// Created by David Lazo on 29/06/2019.
//

#ifndef UNIDAD7LAZO_CIRCLE_H
#define UNIDAD7LAZO_CIRCLE_H

#include "Component.h"
class Circle:public Component {
    int x,y;
    int weight,height;
public:
    Circle(int x1,int y1,int weight1,int height1):x(x1),y(y1),weight(weight1),height(height1){};
    void get_all()override{
        cout<<x<<endl<<y<<endl<<weight<<endl<<height<<endl;
    }
    void OnClick(function<void(Event)>)override{}
    void onMouseMove(function<void(Event)>)override{}
    void draw()override{}
};
#endif //UNIDAD7LAZO_CIRCLE_H
