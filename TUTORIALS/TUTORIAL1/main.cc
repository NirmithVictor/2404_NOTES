#include<iostream>
#include<cstdlib> 
#include "defs.h"
void printArray(int*);

using namespace std;

int main(){

	srand( (unsigned)time( NULL ) );
	int a[MAX_ARR_SIZE];
	initArray(a);
	printArray(a);
	//the double num thing and updating it for the check thing idek 
	
	cout<<"\n\n\n\n THE DOUBLE THINGY\n\n";
	for(int i=0;i<MAX_ARR_SIZE;i++){
		if(checkNum(a[i])){
			doubleNum(a[i]);	
		}
	}
	printArray(a);
		
	return(0);
	
}

void printArray(int* arr){
	for(int i=0;i<MAX_ARR_SIZE;i++){
		cout<<i<<" : "<<arr[i]<<endl;
	}
}
