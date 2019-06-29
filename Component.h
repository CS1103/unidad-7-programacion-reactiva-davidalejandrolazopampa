//
// Created by David Lazo on 29/06/2019.
//

#ifndef UNIDAD7LAZO_COMPONENT_H
#define UNIDAD7LAZO_COMPONENT_H
#include "Event.h"
#include <functional>
#include "Window.h"

using namespace std;
class Component {
protected:
    function<void(Event)> clickEvent;
    function<void(Event)> mouseMoveEvent;
//private:
    //Window parent; :"u
public:
    virtual void OnClick(function<void(Event)>)=0;
    virtual void onMouseMove(function<void(Event)>)=0;
    virtual void draw()=0;
    virtual void get_all()=0;
};
#endif //UNIDAD7LAZO_COMPONENT_H
