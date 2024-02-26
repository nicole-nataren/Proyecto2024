#include"Lista.h"

Lista::Lista(){
    this->head=0;
    this->tail=0;
}

Lista::Lista(int key){
    Nodo *nuevoNodo=new Nodo(Key);
    this->head=nuevoNodo;
    this->tail=nuevoNodo;
}

void Lista::pushFront(int key){
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

int Lista::popFront(){
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

void Lista::pushBack(int key){
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

int Lista::popBack(){
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

void Lista::print(){
    Nodo *iterador;
    iterador=head;
    while (iterador !=NULL)
    {
        cout<<iterador->key<<endl;
        iterador=iterador->next;
    }
    
}
