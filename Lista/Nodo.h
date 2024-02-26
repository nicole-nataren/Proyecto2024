#ifndef NODO
#define NODO
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Nodo{
public:
    Nodo();
    Nodo(int );
    int key;
    Nodo *next;
};
#endif
