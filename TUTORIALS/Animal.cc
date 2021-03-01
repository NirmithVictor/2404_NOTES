#include<iostream>
#include <sstream>
#include<string>
using namespace std;
#include "Animal.h"

int Animal::nextId=1001;

Animal::Animal(string b,string c,string n,string g,int y,int m):Identifiable("A",nextId){

	name=n;
	breed=b;
	colour=c;
	gender=g;
	age_months=y*12+m;
	id=nextId++;
}

Animal::~Animal(){
	cout<<"DETROYING "<<name<<" records\n";
}

int Animal::getAge(){
	return age_months;
}

string Animal::getBreed(){
	return breed;
}

string Animal::getName(){
	return name;
}

string Animal::getGender(){
	return gender;
}

void Animal::print() const{
	cout<<"ID NUMBER: "<<id<<" Animal Name- "<<name<<"  Breed: "<<breed<<" Gender: "<<gender<<" Age:"<<age_months<<" colour:"<<colour<<"\n";
}

