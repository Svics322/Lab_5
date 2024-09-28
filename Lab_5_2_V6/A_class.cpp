#include"A_class.h"
#include"Utils.h"

char A::getSetElement(size_t index) const {
	if (index >= this->getSetSize())
		return ' '; // Не існуючий символ множини	
	else
		return this->set[index];
}

char A::getElement(size_t index) const {
	char element = this->getSetElement(index);
	if (element == ' ')
		throw std::out_of_range("Множина не має елементу під таким індексом");
	else return element;
};

A::A(){
	this->set = new char[this->N];

	for (size_t i = 0; i < this->N / 2; i++)
		this->set[i] = i + 48;
	for (size_t i = this->N / 2; i < this->N; i++) {
		this->set[i] = '-';
	}
};

A::~A() {
	delete[] this->set;
}