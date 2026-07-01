#include <iostream>
#include <vector>
#include <string>
#include "canvas.h"

using namespace std;

Canvas::Canvas(size_t row, size_t col){
    width = row; height = col;

    for(int q = 0 ; q < height ; q++){
        canvas.push_back(vector<char>());
        for(int e = 0 ; e < width ; e++){
            canvas[q].push_back('.');
        }
    }
}

Canvas::~Canvas(){canvas.clear();}

int Canvas::getWidth() {return width;}
int Canvas::getHeight() {return height;}

void Canvas::Resize(size_t w, size_t h){
    
    /*for(int q = 0 ; q < canvas.size(); q ++){
        canvas[q].clear();
    }
    canvas.clear();

    width = w; height = h;
    for(int q = 0 ; q < height ; q++){
        canvas.push_back(vector<char>());
        for(int e = 0 ; e < width ; e++){
            canvas[q].push_back('.');
        }
    }*/
    width = w; height = h ;
    vector<vector<char>> temp(h, vector<char>(w, '.'));
    canvas = temp;
}

bool Canvas::DrawPixel(int x, int y, char brush){
    if((width >= x && height >= y && x >=0 && y >=0)) {
        canvas[y][x] = brush;
        return true;
    }
    else return false;
}

void Canvas::Print(){
    cout << "  ";
    for(int q = 0 ; q < width; q++) cout << q%10;
    cout << "\n";

    for(int q = 0 ; q < height ; q++){
        cout << q%10 << " ";
        for(int w = 0 ; w < width; w++){
            cout << canvas[q][w];
        }
        cout << "\n";
    }
}

void Canvas::Clear(){
    for(int q = 0 ; q < height ; q++){
        for(int w = 0 ; w < width ; w++){
            canvas[q][w] = '.';
        }
    }
}


void Rectangle::Draw(Canvas* can){
    int initX = x;
    int initY = y;

    int startPointX = x;
    int startPointY = y;
    can->DrawPixel(x,y,Sbrush);
    while (true)
    {

        if((x == (startPointX + Swidth -1) ) && (y == (startPointY + Sheight -1) )) break; // if point ends

        else if(x == startPointX + Swidth-1){
            y++;
            x = startPointX;
        } // if point is on last x
        else x++; // else, point moves to next

        can->DrawPixel(x,y,Sbrush);
    }
    x = initX; y = initY;
}

void UpTriangle::Draw(Canvas* can){
    int initX = x;
    int initY = y;

    int startPointX = x;
    int nextLineX = x-1;
    int startPointY = y;
    for(int q = 0 ; q <= Swidth-1 ; q++){
        for(int e = 0 ; e < (2*q)+1 ; e++){
            can->DrawPixel(x,y,Sbrush);
            x++;
        }
        y++;
        x = nextLineX;
        nextLineX--;
    }
    x = initX; y = initY;
}

void DownTriangle::Draw(Canvas* can){
    int initX = x;
    int initY = y;

    int startPointX = x;
    int nextLineX = x-1;
    int startPointY = y;
    for(int q = 0 ; q <= Swidth-1 ; q++){
        for(int e = 0 ; e < (2*q)+1 ; e++){
            can->DrawPixel(x,y,Sbrush);
            x++;
        }
        y--;
        x = nextLineX;
        nextLineX--;
    } 
    x = initX; y = initY;

}

void Diamond::Draw(Canvas* can){
    int initX = x;
    int initY = y;

    int startPointX = x;
    int nextLineX = x-1;
    int startPointY = y;
    for(int q = 0 ; q <= Swidth ; q++){
        for(int e = 0 ; e < (2*q)+1 ; e++){
            can->DrawPixel(x,y,Sbrush);
            x++;
        }
        y++;
        x = nextLineX;
        nextLineX--;
    }
    nextLineX++;
    nextLineX++;
    nextLineX++;
    x = nextLineX;
    for(int q = Swidth-1 ; q >=0 ; q-- ){
        for(int e = 0 ; e < (2*q)+1 ; e++){
            can->DrawPixel(x,y,Sbrush);
            x++;
        }
        y++;
        nextLineX++;
        x = nextLineX;
    } // Draw lower tri;
    x = initX; y = initY;

}