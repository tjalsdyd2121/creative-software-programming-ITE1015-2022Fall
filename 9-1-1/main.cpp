#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A{
public:
    virtual string test() {return "A::test()" ; };
};

class B :public A{
public: 
    virtual string test() {return "B::test()" ;} ;
};

class C :public B{
public:
    virtual string test() {return "C::test()";};
};


int main(){
    A* a = new A ; B* b = new B; C* c = new C;
    vector<A*> arr;
    arr.push_back(a); arr.push_back(b); arr.push_back(c);

    cout << (arr[0])->test() << "\n" << (arr[1])->test() << "\n" << (arr[2])->test();
    delete a; delete b; delete c;
}