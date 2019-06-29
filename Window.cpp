//
// Created by David Lazo on 29/06/2019.
//

#include "Window.h"
#include <algorithm>

void Window::addComponent(Component* component) {
    controls.push_back(component);
}
void Window::removeComponent(Component *component) {
    auto item=find(begin(controls),end(controls),component);
    if (item!=end(controls)){
        controls.erase(item);}
}
void Window::run() {
    for(auto figures:controls){
        figures->get_all();
    }
}