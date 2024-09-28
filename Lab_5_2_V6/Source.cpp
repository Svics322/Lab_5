#include"Includes.h"
#include<Windows.h>

int main(int argc, char** argv[]) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	A a = A();
	B b = B();

	a.printSet();
	b.printSet();

	Calculus::calcComplement(a);
	Calculus::calcIntersection(a, b);
	Calculus::calcUnion(a, b);
	Calculus::calcDifference(a, b);
	Calculus::calcSymmetric(a, b);

	return 0;
}