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
	void print();
   
private:
   Nodo *head;
   Nodo *tail
};
#endif
