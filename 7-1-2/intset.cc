#include <iostream>
#include "intset.h"
#include <vector>
#include <algorithm>

using namespace std;

IntegerSet:: IntegerSet(){};
IntegerSet:: ~IntegerSet(){};

void IntegerSet:: AddNumber(int num){
            if(find(numbers_.begin(),numbers_.end(),num) == numbers_.end()){
                            numbers_.push_back(num);
                                    sort(numbers_.begin(),numbers_.end());
                                        }


                for(auto it = numbers_.begin(); it != numbers_.end(); it++){
                                cout << *it << " " ;
                                    }
                    cout << "\n";

}

void IntegerSet:: DeleteNumber(int num){
            if(find(numbers_.begin(),numbers_.end(), num) != numbers_.end()){
                            int it2 = find(numbers_.begin(),numbers_.end(), num) - numbers_.begin();
                                    numbers_.erase(numbers_.begin()+it2);
                                            sort(numbers_.begin(),numbers_.end());


                                                    for(auto it = numbers_.begin(); it != numbers_.end(); it++){
                                                                    cout << *it << " " ;
                                                                            }
                                                            cout << "\n";
                                                                }
}

int IntegerSet:: GetItem(int pos){
            if(numbers_.size() > pos) return numbers_[pos];
                else return (-1);
}

vector<int> IntegerSet:: GetAll(){
            return numbers_;
}