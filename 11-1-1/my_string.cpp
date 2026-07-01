#include <iostream>
#include "my_string.h"

using namespace std;

ostream& operator<<(std::ostream& out, MyString& my_string){
    out << my_string.str;
    return out;
}

MyString& MyString::operator=(const MyString& b){
    str = b.str;
    return *this;
}

MyString MyString::operator+(const MyString& b){
    MyString temp;
    temp.str = str+b.str;
    return temp;
}

MyString MyString::operator*(const int b){
    MyString temp;
    for(int q = 0 ; q < b ; q++) temp.str += str;
    return temp;
}


istream& operator>>(std::istream& in, MyString& my_string){
    string temp;
    in >> temp;
    my_string.str = temp;
}