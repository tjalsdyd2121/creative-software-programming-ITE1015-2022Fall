#include <iostream>
#include "my_vector.h"

using namespace std;

ostream& operator<< (ostream& out , MyVector& b){
    for(int q = 0 ; q < b.length ; q++) out << b.a[q] << " ";
    out << "\n";
    return out;
}

istream& operator>> (istream& in , MyVector& b){
    for(int q = 0 ; q < b.length ; q++) in >> b.a[q];
    return in;
}



MyVector::MyVector(){
    length = 0 ;
    a = nullptr;
}

MyVector::MyVector(int l){
    length = l;
    a = new double [l];
}

MyVector::~MyVector(){delete [] a;}

MyVector& MyVector::operator=(const MyVector& b){
    for(int q = 0 ; q < length ; q++) a[q] = b.a[q];
    return *this;
}

MyVector MyVector::operator+(const MyVector& b){
    MyVector temp(length);
    for(int q = 0 ; q < length ; q++) temp.a[q] = a[q] + b.a[q];
    return temp;
}

MyVector MyVector::operator+(const int b){
    MyVector temp(length);
    for(int q = 0 ; q < length ; q++) temp.a[q] = a[q] + b;    
    return temp;
}

MyVector MyVector::operator-(const MyVector& b){
    MyVector temp(length);
    for(int q = 0 ; q < length ; q++) temp.a[q] = a[q] - b.a[q];    
    return temp;
}

MyVector MyVector::operator-(const int b){
    MyVector temp(length);
    for(int q = 0 ; q < length ; q++) temp.a[q] = a[q] - b;    
    return temp;
}


