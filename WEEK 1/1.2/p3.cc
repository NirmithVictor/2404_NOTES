#include<iostream>
using namespace std;

void add_with_conditions(int a,int b,int c){
	
	int max=a;
	if(max<b && b>c){
		max=b;
	}
	else if(max<c && c>b){
		max=c;
	}
	int i=0,sum=0;
	while(i<max){
		sum+=i;
		++i;
	}
	
	cout<<"Addition with conditionals: \n"<<sum<<endl;

}
