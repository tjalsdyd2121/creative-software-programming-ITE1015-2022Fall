#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include "message.h"

using namespace std;

int main(){
            MessageBook m;

                string a,b;
                    int c;

                        while (1)
                                    {
                                                    cin >> a;

                                                            if(a =="add"){
                                                                                cin >> c ;
                                                                                cin.ignore();
                                                                                            getline(cin,b);

                                                                                                        m.AddMessage(c,b);
                                                                                                                }

                                                                    else if (a == "print"){
                                                                                        cin >> c;

                                                                                                    cout << m.GetMessage(c) << "\n";
                                                                                                            }

                                                                            else if(a =="list"){
                                                                                                vector<int> a = m.GetNumbers();
                                                                                                            for(int q = 0 ; q < a.size(); q++){
                                                                                                                                    cout << a[q] << ": " << m.GetMessage(a[q])<< "\n";
                                                                                                                                                }
                                                                                                                    }

                                                                                    else if(a =="delete"){
                                                                                                        cin >> c ;
                                                                                                                    m.DeleteMessage(c);
                                                                                                                            }
                                                                                                                            
                                                                                            else{
                                                                                                                break;
                                                                                                                        }
                                                                                                }

}