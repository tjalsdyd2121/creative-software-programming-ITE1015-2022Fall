#include <iostream>
#include <string>
#include <vector>
#include "animal.h"

using namespace std;

int main(){
    char ZorC;
    string name_;int age_;int stripe; string toy;
    vector<Animal*> v;
    while (true)
    {
        cin >> ZorC;

        if(ZorC == 'z'){
            cin >> name_ >> age_ >> stripe;
            Animal* ptr = new Zebra(name_,age_,stripe);
            v.push_back(ptr);
        }

        else if(ZorC == 'c'){

            cin >> name_ >> age_ >> toy;
            Animal* ptr = new Cat(name_, age_, toy);
            v.push_back(ptr);


        }
        else break;
    }

    for(auto it = v.begin() ; it != v.end() ; it++){
        (*(it))->printInfo();
    }
    
}