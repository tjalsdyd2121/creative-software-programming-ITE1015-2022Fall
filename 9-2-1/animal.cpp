#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

Animal::Animal(string s, int n) {name = s; age = n;}

Zebra::Zebra(string s, int n, int nums):Animal(s,n) {numStripes = nums;}

void Zebra::printInfo() { cout << "Zebra, Name: " << name << ", Age: " << age << 
", Number of stripes: " << numStripes  << "\n";}

Cat::Cat(string s, int n, string toy):Animal(s,n) {favoriteToy = toy;}

void Cat::printInfo() { cout << "Cat, Name: " << name << ", Age: " << age << 
", Favorite toy: " << favoriteToy  << "\n";}