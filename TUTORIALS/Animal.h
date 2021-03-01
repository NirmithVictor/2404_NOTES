#ifndef ANIMAL_H
#define ANIMAL_H
#include"defs.h"
class Animal
{
  public:
  //breed,colour,name,gender,year,month
    Animal(string="",string="",string="",string="",int=0,int=0);
    ~Animal();
    string getBreed();
    int getAge();
    string getName();
    string getGender();
    void print() const;

  private:
    static int nextId;
    int id;
    string name,breed,gender,colour;
    SpeciesType species;
    int age_months;
};

#endif
