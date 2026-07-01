#pragma once

#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:

    Shape();
    Shape(int width, int height);

    double GetArea() {
        return 0;
    }

    int GetPerimeter() {
        return 0;
    }

    void Draw(int canvas_width, int canvas_height) {};

protected:

    int _width;
    int _height;
    string _brush;

};

class Square :public Shape
{
public:

    Square(int x, int y, int width, string brush);
    double GetArea();
    int GetPerimeter();
    void Draw(int canvas_width, int canvas_height);
    int _x;
    int _y;

};

class Rectangle :public Shape
{
public:

    Rectangle(int x, int y, int width, int height, string brush);
    double GetArea();
    int GetPerimeter();
    void Draw(int canvas_width, int canvas_height);
    int _x;
    int _y;

};

class Diamond :public Shape
{
public:

    Diamond(int x, int y, int distance, string brush);

    double GetArea();
    int GetPerimeter();
    void Draw(int canvas_width, int canvas_height);

    int _x;
    int _y;
    int _distance;

};

