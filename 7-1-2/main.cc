#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "intset.h"
using namespace std;

int main(){
                IntegerSet _set;
                        string s ;
                                int n;

                                        while (1)
                                                        {
                                                                                cin >> s;

                                                                                                if (s == "add"){
                                                                                                                                cin >> n ;
                                                                                                                                                        _set.AddNumber(n);

           }
                                                                                                                else if(s == "del"){
                                                                                                                                                cin >> n;

           _set.DeleteNumber(n);

                           }
                                                                                                                                else if(s == "get"){

   cin >> n ;

                           cout << _set.GetItem(n) << "\n";

                                           }
                                                                                                                                                else break;
                                                                                                                                                        }

}