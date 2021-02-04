#include <iostream>
using namespace std;
#include <string>

#include "Control.h"
#include "Date.h"
#include "Time.h"
#include "Call.h"

Control::Control(int n){
	numCalls=n;
	c_size=0;
}

Control::~Control(){
	for(int i=0;i<c_size;i++){
		delete c[i];
	}
}

void Control::addCall(Call* s){
	if(c_size>=MAX_ARR_SIZE){
		return;
	}
	c[c_size]=s;
	c_size++;
	
}

void Control::launch(){
	initCallsTemp();
	for(int i=0;i<c_size;i++){
		c[i]->print();
	}
}

void Control::initCallsTemp()
{
  addCall(new Call("6139990000", "6133334444", 2020, 1, 1, 0, 31, 12));
  addCall(new Call("6139990000", "6132223333", 2019, 2, 2, 10, 54, 2));
  addCall(new Call("6132223333", "6139990000", 2019, 2, 23, 6, 33, 11));
  addCall(new Call("6132223333", "6139990000", 2019, 3, 2, 10, 54, 2));
  addCall(new Call("6132223333", "6139990000", 2019, 2, 20, 14, 22, 5));
  addCall(new Call("6132223333", "6131112222", 2019, 12, 18, 4, 5, 15));

  addCall(new Call("6131112222", "6132223333", 2019, 6, 30, 6, 2, 5));
  addCall(new Call("6131112222", "6139990000", 2019, 8, 9, 8, 29, 7));
  addCall(new Call("6131112222", "6130000000", 2019, 8, 9, 8, 29, 7));
  addCall(new Call("6131112222", "6138889999", 2019, 3, 10, 15, 12, 11));

  addCall(new Call("6134445555", "6138889999", 2019, 3, 10, 15, 22, 1));
  addCall(new Call("6134445555", "6138887777", 2019, 3, 10, 15, 24, 10));
}


