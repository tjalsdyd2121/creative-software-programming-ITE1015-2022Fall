#include<iostream>
#include  "minmax.h"

using namespace std; 

int mystoi(char* str){

	        int myint = 0;
		        int mydigit = 0 ;
			        if(str[0] == '-'){
					                for(int q  =  1  ; 1 ; q++){
								                        if(str[q] != '\0') mydigit++;
											                        else break;
														                }
							                
							                for(int e = 0 ; e < mydigit ; e++){
										                        int a = 1;
													                        for(int w = mydigit-1-e ; w > 0 ; w--){
																	                                a *= 10;
																					                        }
																                        myint += (((int)str[e+1]-48) * a);
																			                }

									                myint *= -1;
											                
											        }
				        else{
						            for(int q  =  0  ; 1 ; q++){
								                            if(str[q] != '\0') mydigit++;
											                            else break;
														                    }
							                    
							                    for(int e = 0 ; e < mydigit ; e++){
										                            int a = 1;
													                            for(int w = mydigit-1-e ; w > 0 ; w--){
																	                                    a *= 10;
																					                            }
																                            myint += (((int)str[e]-48) * a);
																			                    }    
									            }

					        return myint;
}

int main(int argv , char** argc){
	int* arr = new int[argv-1];

	for(int e =0 ; e < argv-1; e++){
		arr[e] = mystoi(argc[e+1]);
	}

	int max,min;
	max =0;
	min=0;
	int& rx = max;
	int& rn = min;

	getMinMax(arr,(argv-1), rn, rx);
	cout << "min: " << min << "\n";
	cout << "max: " << max << "\n";

	delete[] arr;
}
