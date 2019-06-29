#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;
int main() {
    Window windows;
    windows.addComponent(new Circle(1,2,3,4));
    windows.addComponent(new Rectangle(5,6,7,8));
    windows.run();
}