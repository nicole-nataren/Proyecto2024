#include"Lista-doble.h"
#include "Nodo.h"

ListaDoble::ListaDoble(){
    head=0;   
}

void ListaDoble::pushFront(int key){
    Nodo *nuevoNodo= new Nodo(key);
    nuevoNodo->next=head;
    head=nuevoNodo;
}

int ListaDoble::popFront(){
   if (head==NULL)
   {
    cout<<"la lista esta vacia"<<endl;
   }
   int dato=head->key;
   head=head->next;
   return dato;
}

void ListaDoble::pushBack(int key){
    Nodo *nuevoNodo=new Nodo(key);
    Nodo *iterador=head;

    if(head != NULL){
        while (iterador->next != NULL)
        {
            iterador =iterador->next;
        }
        iterador->next=nuevoNodo;
    }
}

int ListaDoble::popBack(){
    Nodo *iterador=head;
    Nodo *aux;
    int dato;
    if (head==NULL)
    {
        cout<<"la lista esta vacia"<<endl;
    }
    while(iterador->next!=NULL){
        aux=iterador;
        iterador= iterador->next;
        dato=iterador->key;
    }
    aux->next=NULL;
    return dato;
}

void ListaDoble::top(){
    Nodo *iterador;
    iterador=head;
    while (iterador !=NULL)
    {
        cout<<iterador->key<<endl;
        iterador=iterador->next;
    }
    
}