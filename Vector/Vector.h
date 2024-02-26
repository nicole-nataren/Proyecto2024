#ifndef VECTOR
#define VECTOR
#include "Funciones.h"

class Vector{

public:
	Vector();
	Vector(int );
	void pushFront(int );
	void pushBack(int );
	int popFront();
	int popBack();
	void print();
	
private:
	
	int Dim, nume;
	int *vec;
	
};

#endif