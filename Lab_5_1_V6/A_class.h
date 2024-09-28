#pragma once
#include"Utils.h"
#include<iostream>

using namespace std;

class A {
private:
	size_t N;
	char* set;
	char getSetElement(size_t index) const;
public:

	void setElement(size_t index, char value) { this->set[index] = value; };
		
	char getElement(size_t index) const;
	char getName() const { return 'A'; };
	size_t getSetSize() const { return this->N; };

	void printElement(size_t index) const { cout << "Множина " << getName() << ", елемент " << index + 1 << " = " << getElement(index) << endl; };
	void printSet() { Utils::printSet(*this); };

	A();
	A(size_t N);
	~A();
};