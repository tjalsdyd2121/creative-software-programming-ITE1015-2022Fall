#include <iostream>
#include <string>
#include <vector>
#include "shapes.h"

using namespace std;

int main()
{
    string action;

    cin >> action;

    if (action == "quit")

    {
        return 0;
    }



    else

    {

        int cx, cy;

        cin >> cy;

        cx = stoi(action);

        while (1)

        {

            string act;
            cin >> act;


            if (act == "rect")
            {
                int x, y, width, height;
                string s;

                cin >> x >> y >> width >> height >> s;

                Rectangle r(x, y, width, height, s);

                cout << "Area: " << r.GetArea() << endl;
                cout << "Perimeter: " << r.GetPerimeter() << endl;
                cout << " ";



                for (int i = 0; i < cx; i++)

                {

                    cout << i;

                }

                cout << endl;



                r.Draw(cx, cy);

            }



            else if (act == "square")

            {

                int x, y, width;

                string s;



                cin >> x >> y >> width >> s;

                Square sq(x, y, width, s);

                cout << "Area: " << sq.GetArea() << endl;
                cout << "Perimeter: " << sq.GetPerimeter() << endl;
                cout << " ";

                for (int i = 0; i < cx; i++)

                {

                    cout << i;

                }
                cout << endl;

                sq.Draw(cx, cy);

            }


            else if (act == "diamond")

            {

                int x, y, distance;

                string s;


                cin >> x >> y >> distance >> s;

                Diamond d(x, y, distance, s);


                cout << "Area: " << d.GetArea() << endl;
                cout << "Perimeter: " << d.GetPerimeter() << endl;
                cout << " ";


                for (int i = 0; i < cx; i++)
                {
                    cout << i;
                }

                cout << endl;

                d.Draw(cx, cy);

            }

            else if (act == "quit")

            {
                break;
            }

        }
    }
}
