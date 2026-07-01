#include <iostream>
#include<string>
#include "sumdiff.h"

using namespace std;

int main(int argv , char** argc){
	int n1 = stoi(argc[1]);
	int n2 = stoi(argc[2]);
	int n3,n4;
	int& sum = n3;
        int& diff = n4;	
	getSumDiff(n1,n2,sum,diff);

	cout << "sum: " << sum << "\n";
	cout <<"diff: " << diff << "\n";
}
