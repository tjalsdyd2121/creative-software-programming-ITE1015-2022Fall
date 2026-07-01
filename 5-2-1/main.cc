#include <iostream>
#include<string>

using namespace std;

void swapInt(int& n1 , int& n2){
	int temp;
	temp = n1;
	n1 =n2;
	n2 = temp;
}

void swapString(string& s1 , string& s2){ 
	string temp;
	temp = s1;
	s1 = s2;
	s2 = temp;
	
}
	

int main(int argc, char** argv){
	int num1 = stoi(argv[1]);
	int num2 = stoi(argv[2]);
	int& rn1 = num1;
	int& rn2 = num2;

	string str1 = argv[3];
	string str2 = argv[4];
	string& rstr1 = str1;
	string& rstr2 = str2;

	cout << "n1: " << rn1 << ", n2: " << rn2 << ", s1: " << rstr1 << ", s2: " << rstr2;
	swapInt(rn1,rn2);
	cout << "\n";
	swapString(rstr1,rstr2);
	cout << "n1: " << rn1 << ", n2: " << rn2 << ", s1: " << rstr1 << ", s2: " << rstr2;
	
}
