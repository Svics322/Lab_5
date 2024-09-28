#include"Includes.h"
#include<Windows.h>

int main(int argc, char** argv[]) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	A a = A();
	B b = B();
	C c = C();

	a.printSet();
	b.printSet();
	c.printSet();

	D d = D();
	d.calcCartProd(b, c, a);
	d.printCartesianProduction();	
	return 0;
}