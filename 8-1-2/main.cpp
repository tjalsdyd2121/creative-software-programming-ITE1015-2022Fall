#include <iostream>
#include <string>
#include "rect.h"
using namespace std;

int main(){

    int w,h;
    string s;

    while (true)
    {
        cin >> s;

        if(s == "nonsquare"){
            cin >> w >> h;
            NonSquare a(w,h);
            a.print();
        }
        else if( s == "square"){
            cin >> w ;
            Square b(w);
            b.print();
        }
        else break;
    }
    
}