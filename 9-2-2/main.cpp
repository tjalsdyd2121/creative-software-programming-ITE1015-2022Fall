#include <iostream>
#include <vector>
#include <string>
#include "canvas.h"

int main(){
    int canvas_width,canvas_height;
    cin >> canvas_width >> canvas_height;
    Canvas can(canvas_width,canvas_height);
    can.Print();

    string command,commandShape;
    char shapeBrush;
    int shapeWidth,shapeHeight,shapeX,shapeY;

    vector<Shape*> object;
    vector<string> object_element;
    while (true)
    {
        cin >> command;

        if(command == "draw"){
            can.Clear();
            for(int q = 0 ; q < object.size() ; q++){
                object[q]->Draw(&can);
            }
            can.Print();
        }

        else if(command == "add"){
            cin >> commandShape;

            if(commandShape == "rect"){
                cin >> shapeX >> shapeY >> shapeWidth >> shapeHeight >> shapeBrush;
                //Rectangle rect(shapeX,shapeY,shapeWidth,shapeHeight,shapeBrush);
                string element = "rect ";
                element += to_string(shapeX);
                element += " ";
                element += to_string(shapeY);
                element += " ";
                element += to_string(shapeWidth);
                element += " ";
                element += to_string(shapeHeight);
                element += " ";
                element += shapeBrush;

                object.push_back(new Rectangle(shapeX,shapeY,shapeWidth,shapeHeight,shapeBrush));
                object_element.push_back(element);

            }

            else if(commandShape == "tri_up"){
                cin >> shapeX >> shapeY >> shapeWidth >> shapeBrush;
                //UpTriangle uptri(shapeX,shapeY,shapeWidth,shapeBrush);
                string element = "tri_up ";
                element += to_string(shapeX);
                element += " ";
                element += to_string(shapeY);
                element += " ";
                element += to_string(shapeWidth);
                element += " ";
                element += shapeBrush;

                object.push_back(new UpTriangle(shapeX,shapeY,shapeWidth,shapeBrush));
                object_element.push_back(element);
            }
            else if(commandShape == "tri_down"){
                cin >> shapeX >> shapeY >> shapeWidth >> shapeBrush;
                DownTriangle downtri(shapeX,shapeY,shapeWidth,shapeBrush);
                string element = "down_up ";
                element += to_string(shapeX);
                element += " ";
                element += to_string(shapeY);
                element += " ";
                element += to_string(shapeWidth);
                element += " ";
                element += shapeBrush;

                object.push_back(new DownTriangle(shapeX,shapeY,shapeWidth,shapeBrush));
                object_element.push_back(element);
            }
            else if(commandShape == "diamond"){
                cin >> shapeX >> shapeY >> shapeWidth >> shapeBrush;
                Diamond dia(shapeX,shapeY,shapeWidth,shapeBrush);
                string element = "diamond ";
                element += to_string(shapeX);
                element += " ";
                element += to_string(shapeY);
                element += " ";
                element += to_string(shapeWidth);
                element += " ";
                element += shapeBrush;

                object.push_back(new Diamond(shapeX,shapeY,shapeWidth,shapeBrush) );
                object_element.push_back(element);
            }
        }

        else if(command == "dump"){
            for(int q = 0 ; q < object_element.size(); q++){
                cout << q << " " << object_element[q] << "\n";
            }
        }

        else if(command == "delete"){
            int num;
            cin >> num;

            if(num < object.size() && num >= 0 ){
                object.erase(object.begin()+num);
                object_element.erase(object_element.begin()+num);
            }
        }

        else if(command == "resize"){
            cin >> canvas_width >> canvas_height;
            can.Resize(canvas_width,canvas_height);
        }

        else{
            for(auto it = object.begin(); it != object.end(); it++){
                delete (*it);
            }
            object.clear();
            break;
        }
    }
    


}