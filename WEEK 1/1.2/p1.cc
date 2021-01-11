#include<iostream>

using namespace std;

void add(int,int,int);
void add_with_conditions(int,int,int);

int main(){
	cout<<"TERMINOLOGY FOR YALL\n";
	cout<<"====================\n";
	
	//variables and shit
	int a=3,b=5,c=3;
	
	cout<<"VARIABLES:\n";
	
	cout<<a<<" "<<b<<" "<<c<<endl;
	cout<<"\n";
	
	//conditions
	if(a==c){
		c=4;
	}
	
	cout<<"VARIABLES AFTER CONDITIONS\n";	
	cout<<a<<" "<<b<<" "<<c<<endl;
	
	cout<<"\n";
	//functions
	cout<<"FUNCTIONS\n";
	add(a,b,c);
	
	cout<<"FUNCTIONS BUT WITH CONDITIONS\n";
	add_with_conditions(a,b,c);
	
	cout<<"FUNCTIONS BUT WITH CONDITIONS INPUTTED BY USER\n";
	cout<<"\nENTER THREE RANDOM INTEGER VALUES";
	cin>>a>>b>>c;
	
	add_with_conditions(a,b,c);
	
	//pass by reference 
	int &k=a;
	
	cout<<a<<" "<<b<<" "<<c<<" POINT BY REFERENCE "<<k<<endl;
	
	return 0;
}

