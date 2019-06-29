//
// Created by David Lazo on 29/06/2019.
//

#ifndef UNIDAD7LAZO_WINDOW_H
#define UNIDAD7LAZO_WINDOW_H
#include <vector>
#include <iostream>
#include "Component.h"
using namespace std;
class Component;
class Window {
    vector<Component*> controls;
public:
    void run();
    void addComponent(Component *component);
    void removeComponent(Component *component);

};

#endif //UNIDAD7LAZO_WINDOW_H
