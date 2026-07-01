#include <iostream>
#include "my_string2.h"
#include <string>

using namespace std;

int main(){
    string command;
    cin >> command;
    MyString2 a,b;
    cout << "enter a" << "\n";
    cin >> a;
    cout << "enter b" << "\n";
    cin >> b;
    
    char obj_1,obj_2,op;
    //MyString2 temp;
    int i;
    while (true)
    {
        cin >> obj_1;

        if(obj_1 == 'a'){
            cin >> op;

            if(op == '*'){
                cin >> i;
                MyString2 temp(a * i);
                cout << temp;
            }
            else if(op == '+'){
                cin >> obj_2;
                MyString2 temp(a + b);
                cout << temp;
            }
        }
        else if(obj_1 == 'b'){
            cin >> op;

            if(op == '*'){
                cin >> i;
                MyString2 temp(b * i);
                cout << temp;
            }
            else if(op == '+'){
                cin >> obj_2;
                MyString2 temp(b + a);
                cout << temp;
            }
        }

        else break;
        
    }
    
}