#include"C_class.h"
#include"Utils.h"

char C::getSetElement(size_t index) const {
	if (index >= this->getSetSize())
		return ' '; // Не існуючий символ множини	
	else
		return this->set[index];
}

char C::getElement(size_t index) const {
	char element = this->getSetElement(index);
	if (element == ' ')
		throw std::out_of_range("Множина не має елементу під таким індексом");
	else return element;
};

C::C() : N(2) {
	this->set = new char[this->N];

	this->set[0] = '0';
	this->set[1] = '1';
};

C::C(size_t N) : N(N) {
	this->set = new char[this->N];

	for (size_t i = 0; i < this->N; i++)
		this->set[i] = ' ';

	Utils::inputData(*this);
};

C::~C() {
	delete[] this->set;
}