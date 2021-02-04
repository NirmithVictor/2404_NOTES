#ifndef CONTROL_H
#define CONTROL_H

#define MAX_ARR_SIZE 128
#include "Date.h"
#include "Time.h"
#include "Call.h"

class Control
{
  public:
  	Control(int=0);
  	~Control();
	void initCallsTemp();
	void addCall(Call*);
	void launch();
  private:
  	int numCalls;
  	Call *c[MAX_ARR_SIZE];
  	int c_size;
};

#endif
