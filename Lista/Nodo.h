#ifndef NODO
#define NODO
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Nodo{
private:
    
public:
    int key;
    Nodo *next;
    Nodo *prev;
    Nodo();
    Nodo(int );
};
#endif