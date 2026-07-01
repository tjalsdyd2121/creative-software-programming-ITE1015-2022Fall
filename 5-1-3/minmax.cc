#include <iostream>

using namespace std;

void getMinMax(int* arr , int len , int& min , int& max){
	min = arr[0];
	max = arr[0];
	
	for(int q = 0 ; q < len ; q++){
		if(min >= arr[q]){
		       	min = arr[q];
		}
		if(max <= arr[q]){
		       	max = arr[q];
		}
	}
}
