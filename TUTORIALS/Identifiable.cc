#include<iostream>
#include <sstream>
#include<string>
using namespace std;
#include "Identifiable.h"

string Identifiable::nextId="";

Identifiable::Identifiable(string a,int c){
	stringstream b;
	b<<a;
	b<<"-"<<c;
	nextId=b.str();
}

string Identitfiable::getNextId(){
	return nextId;
}
