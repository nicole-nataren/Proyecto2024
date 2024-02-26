#include "Vector.h"

int main() {

	Vector V(4);
	V.pushFront(5);
	V.pushFront(6);
	V.pushBack(56);
	V.popBack();
	V.print();
	
	return 0;
}