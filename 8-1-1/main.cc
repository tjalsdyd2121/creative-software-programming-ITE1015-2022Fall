#include <iostream>
#include "number.h"

using namespace std;

int main(){
    string command; 
    int num;
    Cube n;
    while (1)
    {
       cin >> command;

       if(command == "number"){
        cin >> num;
        n.setNumber(num);
        cout << "getNumber(): "<< n.getNumber() << "\n";
       }

       else if ( command == "square"){
        cin >> num;    
        n.setNumber(num);
        cout << "getNumber(): "<< n.getNumber() << "\n";
        cout << "getSquare(): " << n.getSquare() << "\n";
       }

       else if(command == "cube"){
        cin >> num;
        n.setNumber(num);
        cout << "getNumber(): "<< n.getNumber() << "\n";
        cout << "getSquare(): " << n.getSquare() << "\n";
        cout << "getCube(): " << n.getCube() << "\n";
       }

       else break;
    }
    
}