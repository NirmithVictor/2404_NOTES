#ifndef CALL_H
#define CALL_H

class Call
{
  public:
    Call(string="", string="", int=0,int=0,int=0,int=0,int=0,int=0);
    ~Call();
    bool greaterThan(Call*);
    void print();

  private:
    string src,dest;
    int duration;
    int d_size,t_size;
    Date *d;
    Time *t;
};

#endif
