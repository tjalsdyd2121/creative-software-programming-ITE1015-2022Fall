#include <iostream>
#include "my_string2.h"

using namespace std;

ostream& operator<<(std::ostream& out, MyString2& my_string){
    out << my_string.str;
    return out;
}

MyString2 MyString2::operator+(const MyString2& b){
    MyString2 temp;
    temp.str = str+b.str;
    return temp;
}

MyString2 MyString2::operator*(const int b){
    MyString2 temp;
    for(int q = 0 ; q < b ; q++) temp.str += str;
    return temp;
}


istream& operator>>(std::istream& in, MyString2& my_string){
    string temp;
    in >> temp;
    my_string.str = temp;
    return in;
}