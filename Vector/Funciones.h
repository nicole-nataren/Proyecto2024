#ifndef FUNCIONES
#define FUNCIONES

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Funciones{
   public:
    virtual void pushFront(int )=0;
    virtual void pushBack(int )=0;
    virtual int popFront()=0;
    virtual int popBack()=0;
  	virtual void print()=0;
};
#endif