#include"Nodo.h"

Nodo::Nodo(){
    this->key=0;
    this->next=0;
    this->prev=0;
}
Nodo::Nodo(int key){
    this->key=key;
    this->next=0;
    this->prev=0;
}