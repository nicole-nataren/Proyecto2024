#include "Vector.h"

Vector::Vector(){
	this->Dim=0;
	this->vec=new int(this->Dim);
	this->nume=0;

}

Vector::Vector(int Dim){
	this->Dim=Dim;
	this->vec= new int(this->Dim);
	this->nume=0;
	
}


void Vector::pushFront(int dato){
	
	if(this->nume==this->Dim){
		cout<<"El vector esta lleno, elimine un elemento"<<endl;
	}
	else{
		int *vec1=new int(this->Dim);
		int *aux;
		aux=this->vec;
		vec1[0]=dato;
		
		for(int i=1; i <= this->nume; i++){
			vec1[i]=vec[i-1];
		}
		this->nume=this->nume+1;
		this->vec=vec1;
		delete aux;
	}
	
}

int Vector::popFront(){
	int elem=0;
	if(this->nume==0){
		cout<<"El vector esta vacio"<<endl;
		return elem;
	}
	else{
		int *vec1=new int(this->Dim);
		int *aux;
		aux=vec;
		elem=vec[0];
		
		for(int i=0; i < this->nume-1; i++){
			vec1[i]=vec[i+1];
		}
		
		this->nume=this->nume-1;
		this->vec=vec1;
		delete aux;
		return elem;
	}
}

void Vector::pushBack(int dato){
	if(this->nume==this->Dim){
		cout<<"El vector esta lleno, elimine un elemento"<<endl;
	}
	else{
		vec[this->nume]=dato;
		this->nume=this->nume+1;
	}
}

int Vector::popBack(){
	int elem=0;
	if(this->nume==0){
		cout<<"El vector esta vacio"<<endl;
		return elem;
	}
	else{
		elem=vec[this->nume-1];
		vec[this->nume-1]=0;
		this->nume=this->nume-1;
		return elem;
	}
}

void Vector::print(){
	if(this->nume==0){
		cout<<"El vector esta vacio"<<endl;
	}
	else{
		for(int i=0; i < this->nume; i++){
			cout<<vec[i]<<endl;
	}
}
}
