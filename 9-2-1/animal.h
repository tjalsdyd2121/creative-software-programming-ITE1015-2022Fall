#include <string>

using namespace std;

class Animal{
protected:
    string name;
    int age;
public:
    Animal(string s, int n);
    virtual void printInfo() {};

    
};

class Zebra: public Animal{
    private:
        int numStripes;

    public: 
        virtual void printInfo();
        Zebra(string s, int n, int nums);
};

class Cat: public Animal{
    private:
        string favoriteToy;

    public:
        virtual void printInfo();
        Cat(string s, int n , string toy);
};


