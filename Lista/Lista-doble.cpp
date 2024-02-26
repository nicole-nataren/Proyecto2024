#include"Lista-doble.h"

ListaDoble::ListaDoble(){
    this->head=0;
    this->tail=0;
}

ListaDoble::ListaDoble(int key){
    Nodo *nuevoNodo=new Nodo(Key);
    this->head=nuevoNodo;
    this->tail=nuevoNodo;
}

void ListaDoble::pushFront(int key){
    Nodo *nuevoNodo= new Nodo(key);
    if(this->head==NULL){
    this->head=nuevoNodo;
    this->tail=nuevoNodo;
    }
    else{
    this->head->prev=nuevoNodo;
        nuevoNodo->next=head;
        head=nuevoNodo;
    }
}

int ListaDoble::popFront(){
    int elem=0;
   if (head!=NULL)
   {
       elem=head->next;
       Nodo *aux=head;
       head->next->prev=NULL;
       head=head->next;
       delete aux;
       return elem;
   }
   else{
       cout<<"La lista esta vacia"<<endl;
       return elem;
   }
}

void ListaDoble::pushBack(int key){
    Nodo *nuevoNodo=new Nodo(key);
    
    if(this->head == NULL){
       this->head=nuevoNodo;
        this->tail=nuevoNodo;
    }
    else{
        this->tail->next=nuevoNodo;
        nuevoNodo->prev=this->tail;
        this->tail=nuevoNodo;
    }
}

int ListaDoble::popBack(){
    int elem=0;
    if (head!=NULL)
    {
       elem=tail->key;
        Nodo *aux=tail;
        tail->prev->next=NULL;
        tail=tail->prev;
        delete aux;
        return elem;
    }
    else{
        cout<<"La lista esta vacia"<<endl;
        return elem;
    }
}

void ListaDoble::print(){
    Nodo *iterador;
    iterador=head;
    while (iterador !=NULL)
    {
        cout<<iterador->key<<endl;
        iterador=iterador->next;
    }
    
}
