#ifndef LISTA
#define LISTA
#include"Nodo.h"
#include "Funciones.h"

class Lista{
public:
	Lista();
	Lista(int );
    	void pushFront(int );
  	void pushBack(int );
	int popFront();
    	int popBack();
	void top();
	void print();
   
private:
   Nodo *head;
   
};
#endif
