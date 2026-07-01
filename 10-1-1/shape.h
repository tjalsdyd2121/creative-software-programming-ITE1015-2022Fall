class Shape{
    public:
        Shape(double width, double height);
        virtual double getArea() = 0;
        //virtual ~Shape();
    protected:
        double _width,_height;
};  

class Rectangle: public Shape{
    public:
        Rectangle(double width, double height):Shape(width,height) {};
        virtual double getArea();
        //virtual ~Rectangle();
};

class Triangle:public Shape{
    public:
        Triangle(double width, double height):Shape(width,height) {};
        virtual double getArea();
        //virtual ~Triangle();

};
