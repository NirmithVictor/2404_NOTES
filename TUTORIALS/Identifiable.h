#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

#include"Animal.h"
#include"Client.h"

class Identifiable
{
  public:
    Identifiable(string="", int=0);
    
    ~Identifiable();
    void print() const;
    static string getNextId();
    static string nextId;
	
  private:
    //static int nextId;
    
    int id;
    string title;
    string author;
};

#endif
