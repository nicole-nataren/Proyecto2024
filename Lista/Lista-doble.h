#ifndef LISTADOBLE
#define LISTADOBLE
#include "Funciones.h"
#include"Nodo.h"

class ListaDoble{
public:
	ListaDoble();
	ListaDoble(int );
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
