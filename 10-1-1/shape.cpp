#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape(double width,double height){_width = width;_height = height;}

double Rectangle::getArea() {return (_width * _height);}

double Triangle::getArea() {return (_width * _height)/2 ;}
