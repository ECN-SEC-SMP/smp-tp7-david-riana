#include <iostream>
#include "Point.h"

using namespace std;

void Point::translater(const Point &a){
    x = x + a.x;
    y = y + a.y;
}
