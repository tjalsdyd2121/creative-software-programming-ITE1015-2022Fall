#include <iostream>
#include "my_vector2.h"

using namespace std;

int main(){
    string command;
    int len;
    cin >> command >> len;
    MyVector2 a(len); MyVector2 b(len);
    cout << "enter a" << "\n";
    cin >> a;
    cout << "enter b" << "\n";
    cin >> b;

    char ob1,ob2,op;

    while (true)
    {
        cin >> ob1;

        if(ob1 == 'a'){
            cin >> op;

            if(op == '+'){
                cin >> ob2;

                if(ob2 == 'a'){
                    MyVector2 c(a + a);
                    cout << c;
                }

                else if(ob2 == 'b'){
                    MyVector2 c(a + b);
                    cout << c;
                }
                else{
                    int num_ob2 = ob2-'0'; 
                    MyVector2 c(a + num_ob2);
                    cout << c;
                }

            }

            else{
                cin >> ob2;

                if(ob2 == 'a'){
                    MyVector2 c(a - a);
                    cout << c;
                }

                else if(ob2 == 'b'){
                    MyVector2 c(a - b);
                    cout << c;
 
                }
                else{
                    int num_ob2 = ob2-'0'; 
                    MyVector2 c(a - num_ob2);
                    cout << c;

                }
            }
        }

        else if(ob1 == 'b'){
            cin >> op;

            if(op == '+'){
                cin >> ob2;

                if(ob2 == 'a'){
                    MyVector2 c(b + a);
                    cout << c;

                }

                else if(ob2 == 'b'){
                    MyVector2 c(b + b);
                    cout << c;

                }
                else{
                    int num_ob2 = ob2-'0'; 
                    MyVector2 c(b + num_ob2);
                    cout << c;

                }

            }

            else{
                cin >> ob2;

                if(ob2 == 'a'){
                    MyVector2 c(b - a);
                    cout << c;

                }

                else if(ob2 == 'b'){
                    MyVector2 c(b - b);
                    cout << c;

                }
                else{
                    int num_ob2 = ob2-'0'; 
                    MyVector2 c(b - num_ob2);
                    cout << c;
                    
                }
            }
        }

        else break;
    }
    
}