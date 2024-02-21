#ifndef LISTADOBLE
#define LISTADOBLE
#include"Nodo.h"

class ListaDoble{
public:
	ListaDoble();
    void pushFront(int );
    void pushBack(int );
    int popFront();
    int popBack();
	void top();
   
private:
   Nodo *head;
   
};
#endif