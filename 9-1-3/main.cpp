#include <iostream>
#include <vector>
#include <string>

using namespace std;

class A{
public:

    ~A(){
        delete memberA;
        cout << "delete memberA" << "\n";
    }

    A(int a){
        memberA = new int;
        *memberA = a;
        cout <<"new memberA" << "\n"; 
    }

    virtual void print(){
        cout << "*memberA "<<*(memberA) << "\n";
    }
protected:    
    int* memberA;
};

class B :public A{
public:

    ~B(){
        delete memberB;
        cout << "delete memberB" << "\n";
    }

    B(double b): A(1){
        memberB = new double;
        *memberB = b;
        cout << "new memberB" << "\n";
    }

    virtual void print(){
        A::print();
        cout << "*memberB "<< *(memberB) << "\n";
    }    

protected:
    double* memberB;
};

class C: public B{
public:

    ~C(){
        delete memberC;
        cout << "delete memberC" << "\n";
    }

    C(const string& c): B(1.1){
        memberC = new string;
        *memberC = c;
        cout << "new memberC" << "\n";
    }

    void print(){
        B::print();
        cout << "*memberC "<<*(memberC) << "\n";
    }

protected:
    string* memberC;

};


int main(){
    int intA; double douB; string strC;
    cin >> intA >> douB >> strC ;
    A* a= new A(intA); B* b = new B(douB); C* c = new C(strC);
    vector<A*> arr;
    arr.push_back(a); arr.push_back(b); arr.push_back(c);

    arr[0]->print();
    arr[1]->print();
    arr[2]->print();

    delete a; delete b; delete c;
}

