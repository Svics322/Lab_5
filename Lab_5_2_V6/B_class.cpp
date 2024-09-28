#include"B_class.h"
#include"Utils.h"

char B::getSetElement(size_t index) const {
	if (index >= this->getSetSize())
		return ' '; // Не існуючий символ множини	
	else
		return this->set[index];
}

char B::getElement(size_t index) const {
	char element = this->getSetElement(index);
	if (element == ' ')
		throw std::out_of_range("Множина не має елементу під таким індексом");
	else return element;
};

B::B() {
	this->set = new char[this->N];

	for (size_t i = 0; i < this->N; i++)
		this->set[i] = i + 48;	
};

B::~B() {
	delete[] this->set;
}