#include<iostream>

using namespace std;

//inline function
inline int cube_fun(int a){
	return a*a*a;
}

void defaultfunc(int a=5){
	cout<<"Default value is "<<a<<endl;
}

int main(){
	
	int a;
	cout<<"Enter a number:";
	cin>>a;
	float b=cube_fun(a);
	cout<<"Cube of the value is: "<<b<<endl;
	
	//default parameters function
	defaultfunc();
	//func now with parameters
	cout<<"default function now with a parameter";
	defaultfunc(2);

}
