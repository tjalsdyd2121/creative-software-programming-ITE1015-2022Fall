#include <iostream>
#include "sorted.h"
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
                string s = " ";
                        SortedArray arr;
                                vector<int> v;
                                        while (1)
                                                        {
                                                                                cin >> s;

                                                                                                if(s == "ascend"){
                                                                                                                                v = arr.GetSortedAscending();                                                                                                                                                        for(int q = 0 ; q < v.size(); q++) cout << v[q] << " ";

                   cout << "\n";

                                   }
                                                                                                                else if(s == "descend"){
                                                                                                                                                v = arr.GetSortedDescending();

           for(int q = 0 ; q < v.size(); q++) cout << v[q] << " ";

                                   cout << "\n";

                                                   }
                                                                                                                                else if(s == "max"){

   cout << arr.GetMax() << "\n" ;

                   }
                                                                                                                                                else if(s == "min"){

                   cout << arr.GetMin() << "\n";

                                   }
   else if(s =="quit") break;

                   else{

                                                   arr.AddNumber(stoi(s));

                                                                   }

                           }

}                             