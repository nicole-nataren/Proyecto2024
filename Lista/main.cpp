#include "Lista.h"

int main() {
	
	cout<<"Te presentamos tu lista sugerida."<<endl;
	Lista L1;
	L1.pushFront(1);
	L1.pushBack(2);
	L1.pushBack(3);
	L1.pushBack(4);
	L1.pushBack(5);
	cout<<"La lista es: "<<endl;
	L1.print();
	cout<<"\nEliminaremos el primer elementos: "<<L1.popFront();
	cout<<"\nEliminaremos el segundo elementos: "<<L1.popBack();
	cout<<"\nLa lista es: "<<endl;
	L1.print();
	cout<<"\nEl primer elemento es: "<<L1.top();

	
	return 0;
}