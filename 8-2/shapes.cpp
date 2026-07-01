#include <iostream>
#include <string>
#include <vector>
#include "shapes.h"

using namespace std;

Shape::Shape()

{}

Shape::Shape(int width, int height)

{

    _width = width;
    _height = height;

}



Square::Square(int x, int y, int width, string brush)

{
    _x = x;
    _y = y;

    _width = width;
    _brush = brush;

}





double Square::GetArea()

{
    double area;
    area = _width * _width;

    return area;
}

int Square::GetPerimeter()

{

    int perimeter;

    perimeter = 4 * _width;

    return perimeter;

}



void Square::Draw(int canvas_width, int canvas_height)

{

    vector<vector<string>> v(canvas_height, vector<string>(canvas_width, "."));

    for (int i = _y; i < _y + _width && i < canvas_width; i++)

    {

        for (int k = _x; k < _x + _width && k < canvas_width; k++)

        {

            v[i][k] = _brush;

        }

    }



    for (int i = 0; i < canvas_height; i++)

    {

        cout << i;

        for (int k = 0; k < canvas_width; k++)

        {
            cout << v[i][k];
        }
        cout << endl;


    }
}

Rectangle::Rectangle(int x, int y, int width, int height, string brush)

{
    _x = x;
    _y = y;
    _width = width;
    _height = height;
    _brush = brush;

}


double Rectangle::GetArea()

{

    double area;

    area = _width * _height;

    return area;

}

int Rectangle::GetPerimeter()

{

    int perimeter;
    perimeter = 2 * (_width + _height);

    return perimeter;

}

void Rectangle::Draw(int canvas_width, int canvas_height)

{

    vector<vector<string>> v(canvas_height, vector<string>(canvas_width, "."));

    for (int i = _y; i < _y + _height && i < canvas_height; i++)

    {

        for (int k = _x; k < _x + _width && k < canvas_width; k++)

        {

            v[i][k] = _brush;

        }



    }



    for (int i = 0; i < canvas_height; i++)

    {

        cout << i;

        for (int k = 0; k < canvas_width; k++)

        {

            cout << v[i][k];

        }

        cout << endl;

    }

}



Diamond::Diamond(int x, int y, int distance, string brush)

{

    _x = x;
    _y = y;
    _distance = distance;
    _brush = brush;

}





double Diamond::GetArea()

{

    double area;
    area = (1 + 2 * _distance) * (1 + 2 * _distance) * 0.5;


    return area;

}



int Diamond::GetPerimeter()

{

    int perimeter;
    perimeter = 4 * (1 + _distance);

    return perimeter;

}



void Diamond::Draw(int canvas_width, int canvas_height)

{

    vector<vector<string>> v(canvas_height, vector<string>(canvas_width, "."));

    for (int i = _y; i <= _y + _distance && i < canvas_height; i++)
    {
        if (_x - i + _y < 0)
        {
            for (int j = 0; j <= _x + i - _y && j < canvas_width; j++)
            {
                v[i][j] = _brush;

            }

        }

        else

        {

            for (int j = _x - i + _y; j <= _x + i - _y && j < canvas_width; j++)

            {
                v[i][j] = _brush;

            }

        }



    }



    for (int i = _y + _distance + 1; i <= _y + 2 * _distance && i < canvas_height; i++)

    {

        for (int j = _x + i - _y - 2 * _distance; j <= _x - i + _y + 2 * _distance && j < canvas_width; j++)

        {

            if (j < 0)

            {

                j = 0;

                v[i][j] = _brush;

            }

            else

            {

                v[i][j] = _brush;

            }

        }

    }





    for (int i = 0; i < canvas_height; i++)

    {

        cout << i;

        for (int k = 0; k < canvas_width; k++)

        {

            cout << v[i][k];

        }
        cout << endl;

    }

}