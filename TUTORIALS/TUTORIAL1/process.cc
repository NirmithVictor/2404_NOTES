#include <iostream>
#include "defs.h"
using namespace std;

void doubleNum(int&);
bool checkNum(int);


/* Parameter n is a input parameter */
/* Parameter res is a output parameter */
void doubleNum(int &res)
{
  res=res*2;

}

/* Parameter n is a input parameter */
bool checkNum(int n)
{
  return ( n >= 0 && n <= 100 );
}

