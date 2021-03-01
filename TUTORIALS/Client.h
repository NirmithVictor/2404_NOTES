#ifndef CLIENT_H
#define CLIENT_H

#include "CriteriaArray.h"
#include "Criteria.h"
class Client
{
  public:
    Client(string="");
    string getClientName();
    ~Client();
    CriteriaArray getCriteria();
    void addCriteria(Criteria*);
    
  private:
    static int nextId;
    int id;
    string client_name;
    CriteriaArray ar;
    
};

#endif
