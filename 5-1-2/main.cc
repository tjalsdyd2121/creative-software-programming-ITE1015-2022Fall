#include <iostream>
#include <string>
using namespace std;


typedef struct
{
	        double score;
		        string name;
} Person;


int main(int argv , char** argc){
	        Person* arr = new Person[(argv-1)/2];

		        for(int q = 0 ; q < (argv-1)/2; q++){
				                arr[q].name = argc[2*q+1];
						                arr[q].score = stod(argc[2*q+2]);
								        }

			        for(int w = 0 ; w < (argv-1)/2; w++){
					                cout << "Name: " << arr[w].name << ", " << "Score: " << arr[w].score << "\n";
							                
							        }
				delete[] arr;

}
