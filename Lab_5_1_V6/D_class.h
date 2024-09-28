#pragma once
#include"Utils.h"
#include<iostream>

using namespace std;

class D {
private:
	const size_t C = 3;
	size_t R;
	char** SetMatrix;

	void delMatrix();
	void setMatrixRows(size_t R) { this->R = R; };
	void genMatrix();
public:	

	char getName() const { return 'D'; };

	char getElement(size_t row, size_t column) const;

	void printCartesianProduction();

	template <typename T1, typename T2, typename T3>
	void calcCartProd(T1& obj1, T2& obj2, T3& obj3);

};