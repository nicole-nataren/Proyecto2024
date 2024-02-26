#include"Lista.h"
#include "Nodo.h"

Lista::Lista(){
    this->head=0;   
}

Lista::Lista(int key){
    Nodo *nuevoNodo= new Nodo(key);
    this->head=nuevoNodo;
}

void Lista::pushFront(int key){
    Nodo *nuevoNodo= new Nodo(key);
    nuevoNodo->next=head;
    head=nuevoNodo;
}

int Lista::popFront(){
    int elem=0;
   if (head!=NULL)
   {
        Nodo *aux=head;
        elem=this->head->key;
        head=head->next;
        delete aux;
        return elem;
   }
    else{
       cout<<"La lista esta vacia"<<endl;
       return dato;
    }
}

void Lista::pushBack(int key){
    Nodo *nuevoNodo=new Nodo(key);
    Nodo *iterador=head;

    if(head != NULL){
        while (iterador->next != NULL)
        {
            iterador =iterador->next;
        }
        iterador->next=nuevoNodo;
    }
    else{
        head=nuevoNodo;
    }
}

int Lista::popBack(){
    int elem=0;
    if (head!=NULL)
    {
        Nodo *iterador;
        iterador=head;
        while(iterador->next->next !=NULL){
            iterador= iterador->next;
        }
    Nodo *aux=iterador->next;
        iterador->next=NULL;
        delete aux;
        return elem;
    }
    else{
    cout<<"La lista esta vacia"<<endl;
        return elem;
    }
    
}


void Lista::print(){
    Nodo *iterador;
    iterador=head;
    while (iterador !=NULL)
    {
        cout<<iterador->key<<endl;
        iterador=iterador->next;
    }
    
}
