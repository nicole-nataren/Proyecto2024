#ifndef LISTA
#define LISTA
#include "Funciones.h"
#include"Nodo.h"

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
   Nodo *tail;
};
#endif
