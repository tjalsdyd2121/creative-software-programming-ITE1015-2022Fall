#include <iostream>
#include <vector>

using namespace std;

class Canvas {
 public:
  Canvas(size_t row, size_t col);
  ~Canvas();
  int getWidth();
  int getHeight();

  // Change this canvas size to w x h. Preserve already existing shapes on the canvas.
  void Resize(size_t w, size_t h);

  // Dot with the brush at (x,y). If (x,y) is outside the canvas, just ignore it.
  bool DrawPixel(int x, int y, char brush);

//Print out the canvas
  void Print();

  // Erase all (initialize with '.')
  void Clear();
 private:
  int width,height;
  vector< vector<char> > canvas;
// Define data member to save drawn shapes (note the resize function)
};


class Shape {
 public:
  Shape(int x_cor,int y_cor,int width, int height, char brush):
  x(x_cor),y(y_cor),Swidth(width),Sheight(height),Sbrush(brush){};
  //virtual ~Shape();
  virtual void Draw(Canvas* canvas) {};
 protected:
 int Swidth,Sheight,x,y;
 char Sbrush;
  // Define common properties of shapes
};


class Rectangle : public Shape {
  public:
    Rectangle(int x_cor,int y_cor,int width, int height, char brush):Shape(x_cor,y_cor,width,height,brush){};
    virtual void Draw(Canvas* canvas);
};
class UpTriangle : public Shape { 
  public:
    UpTriangle(int x_cor,int y_cor,int width, char brush):Shape(x_cor,y_cor,width,width,brush){};
    virtual void Draw(Canvas* canvas);
    /* Define required members */ 
};
class DownTriangle : public Shape { 
  public:
    DownTriangle(int x_cor,int y_cor,int width, char brush):Shape(x_cor,y_cor,width,width,brush){};
    virtual void Draw(Canvas* canvas);
    /* Define required members */ 
};
class Diamond : public Shape { 
  public:
    Diamond(int x_cor,int y_cor,int width, char brush):Shape(x_cor,y_cor,width,width,brush){};
    virtual void Draw(Canvas* canvas);
    /* Define required members */ 
};
