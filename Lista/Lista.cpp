#include"Lista.h"

Lista::Lista(){
    this->head=0;   
}

Lista::Lista(int key){
    Nodo *nuevoNodo= new Nodo(key);
    this->head=nuevoNodo;
    this->tail=nuevoNodo;
}

void Lista::pushFront(int key){
    Nodo *nuevoNodo= new Nodo(key);
     if(head!=NULL){
        nuevoNodo->next=head;
         head=nuevoNodo;
     }
    else{
        this->tail=nuevoNodo;
        this->head=nuevoNodo;
    }
}

int Lista::popFront(){
    int elem=0;
   if (head!=NULL)
   {
        Nodo *aux=head;
        elem=this->head->key;
        this->head=head->next;
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
        tail=nuevoNodo;
    }
    else{
        this->tail=nuevoNodo;
        this->head=nuevoNodo;
    }
}

int Lista::popBack(){
    int elem=0;
    if (head!=NULL)
    {
        Nodo *aux;
        Nodo *iterador;
        while(iterador->next->next !=NULL){
            iterador= iterador->next;
        }
        aux=iterador->next;
        elem=iterador->next->key;
        iterador->next=NULL;
        tail=iterador;
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
