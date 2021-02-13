#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Date.h"
#include "Time.h"
#include "Call.h"

Call::Call(string s,string de,int y,int m,int da, int h, int min,int dur){
	src=s;
	dest=de;
	duration=dur;
	d=new Date(da,m,y);
	t=new Time(h,min);
}
Call::~Call(){
	//cout<<"In Dtor";
	delete d;
	delete t;
}

bool Call::greaterThan(Call* c){

	if(!(d->greaterThan(c->d) && t->greaterThan(c->t))){
		return false;
	}
	return true;
}

void Call::print(){
	cout<<"Call source "<<src<<" ";
	cout<<"destination "<<dest<<" ";
	cout<<"Duration "<<duration<<" ";
	d->print();
	t->print();
}
