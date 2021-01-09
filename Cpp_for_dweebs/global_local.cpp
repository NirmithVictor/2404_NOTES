/*
Here I just wanted to show the difference between local and global variable
*/

#include<iostream>

using namespace std;

//can name it as number as well 
int n=79;

int edit_global(int a){
	n+=a;
	return n;
}


int main(){
	//local variable
	int number=7;
	cout<<"local variable: "<<number<<endl;
	
	//global variable
	cout<<"global variable:"<<::n<<endl<<"\n";
	
	//global value editted by a function 
	cout<<"EDITING A GLOBAL VALUE THROUGH FUNCTION"<<endl;
	static int c;
	for(int i=0;i<3;i++){
		c=edit_global(i);
	}
	cout<<"After changing it: "<<c<<endl;		
}
