#include<iostream>
#include "defs.h"
using namespace std;
void initArray(int* arr){
	//cout<<"Yeah";
	for(int i=0;i<MAX_ARR_SIZE;i++){
		arr[i]=random(119);
	}
}
