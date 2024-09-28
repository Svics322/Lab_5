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

B::B() : N(3) {
	this->set = new char[this->N];

	this->set[0] = 'x';
	this->set[1] = 'y';
	this->set[2] = 'z';	
};

B::B(size_t N) : N(N) {
	this->set = new char[this->N];

	for (size_t i = 0; i < this->N; i++)
		this->set[i] = ' ';

	Utils::inputData(*this);
};

B::~B() {
	delete[] this->set;
}