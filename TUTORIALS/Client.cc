#include<iostream>
#include <sstream>
#include<string>
using namespace std;
#include "Client.h"
#include "CriteriaArray.h"
#include "Criteria.h"

int Client::nextId=1001;

Client::Client(string n):Identifiable("C",nextId){
	client_name=n;
	id=nextId++;
}

string Client::getClientName(){
	return client_name;
}

CriteriaArray Client::getCriteria(){
	return ar;
}

void Client::addCriteria(Criteria *a){
	ar.add(a);
}

Client::~Client(){
cout<<"Destroyed Client Named: "<<client_name;
}
