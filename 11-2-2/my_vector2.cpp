#include <iostream>
#include "my_vector2.h"

using namespace std;

ostream& operator<< (ostream& out , MyVector2& b){
    for(int q = 0 ; q < b.length ; q++) out << b.a[q] << " ";
    out << "\n";
    return out;
}

istream& operator>> (istream& in , MyVector2& b){
    for(int q = 0 ; q < b.length ; q++) in >> b.a[q];
    return in;
}

MyVector2::MyVector2(const MyVector2& mv){
    a = new double[mv.length];
    length = mv.length;
    for(int q = 0 ; q < length ; q++) a[q] = mv.a[q];
}
MyVector2::MyVector2(){
    length = 0 ;
    a = nullptr;
}

MyVector2::MyVector2(int l){
    length = l;
    a = new double [l];
}

MyVector2::~MyVector2(){delete [] a;}


MyVector2 MyVector2::operator+(const MyVector2& b){
    MyVector2 temp(length);
    for(int q = 0 ; q < length ; q++) temp.a[q] = a[q] + b.a[q];
    return temp;
}

MyVector2 MyVector2::operator+(const int b){
    MyVector2 temp(length);
    for(int q = 0 ; q < length ; q++) temp.a[q] = a[q] + b;    
    return temp;
}

MyVector2 MyVector2::operator-(const MyVector2& b){
    MyVector2 temp(length);
    for(int q = 0 ; q < length ; q++) temp.a[q] = a[q] - b.a[q];    
    return temp;
}

MyVector2 MyVector2::operator-(const int b){
    MyVector2 temp(length);
    for(int q = 0 ; q < length ; q++) temp.a[q] = a[q] - b;    
    return temp;
}


