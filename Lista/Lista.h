#ifndef LISTA
#define LISTA
#include"Nodo.hpp"

class Lista{
public:
	Lista();
    void pushFront(int );
    void pushBack(int );
    int popFront();
    int popBack();
	void top();
   
private:
   Nodo *head;
   
};
#endif