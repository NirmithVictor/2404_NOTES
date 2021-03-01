#ifndef CONTROL_H
#define CONTROL_H

#define MAX_ARR 64

class Control
{
  public:
	Control();
	~Control();
	bool add(Client*);
	bool add(Animal*);
	void printAnimals();
	void printClients();
	void launch();
	
  private:
	Animal *a[MAX_ARR];
	Client *c[MAX_ARR];
	int a_count;
	int c_count;
};

#endif
