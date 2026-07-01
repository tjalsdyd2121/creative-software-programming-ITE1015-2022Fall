#include <iostream>
#include <vector>

using namespace std;

class B 
{
public:
    virtual ~B() {}
};
class C : public B
{
public:
    void test_C() { std::cout << "C::test_C()" << std::endl; }
};
class D : public B
{
public:
    void test_D() { std::cout << "D::test_D()" << std::endl; }
};

int main(){
    char ty = '1';
    vector<B*> arr;
    while (ty != '0')
    {
        cin >> ty;

        if(ty == 'B'){
            arr.push_back(new B);
        }
        else if(ty == 'C'){
            arr.push_back((new C));
        }
        else if(ty == 'D'){
            arr.push_back(new D);
        }
    }
    for(auto it = arr.begin(); it != arr.end(); it++){
        C* cptr = dynamic_cast<C*>((*it));
        D* dptr = dynamic_cast<D*>((*it));

        if(cptr == nullptr){
            if(dptr == nullptr){

            }
            else{
                dptr->test_D();
            }
        }
        else{
            cptr->test_C();
        }
    }

    for(auto it = arr.begin() ; it != arr.end() ; it++) delete (*it);

    
}
