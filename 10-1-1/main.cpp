#include <iostream>
#include <vector>
#include "shape.h"

using namespace std;

int main(){
    char shapes;double w,h;
    vector<Shape*> arr;
    while (true)
    {
        cin >> shapes;
        if(shapes == 't'){
            cin >> w >> h;
            arr.push_back(new Triangle(w,h));
        }

        else if(shapes == 'r'){
            cin  >> w >> h;
            arr.push_back(new Rectangle(w,h));
        }
        else{
            break;
        }
    }
    for(vector<Shape*>::iterator it = arr.begin() ; it != arr.end(); it++){
        cout << (*it)->getArea() << "\n";
    }
    for(auto it = arr.begin() ; it != arr.end(); it++){
        delete (*it);
    }
    
}