#include"Calculus.h"
#include"Includes.h"
#include<bitset>

template <typename T1>
static std::bitset<Calculus::N> Calculus::calcComplement(T1& obj1) {
	std::bitset<Calculus::N> bitset_res;	
	cout << "Доповнення множини " << obj1.getName() << ":\t";
	for (size_t i = 0; i < Calculus::N; i++)
		if (obj1.getElement(i) != '-')
			bitset_res.set(i);
	cout << bitset_res << endl;
	return bitset_res;
}

template std::bitset<Calculus::N>Calculus::calcComplement<A>(A& obj1);
template std::bitset<Calculus::N>Calculus::calcComplement<B>(B& obj1);

template <typename T1, typename T2>
static std::bitset<Calculus::N> Calculus::calcIntersection(T1& obj1, T2& obj2) {
	std::bitset<Calculus::N> bitset_res;	
	cout << "Перетин множин " << obj1.getName() << " та ";
	cout << obj2.getName() << ":\t";
	for (size_t i = 0; i < Calculus::N; i++) {	
		if (obj1.getElement(i) == obj2.getElement(i) && obj1.getElement(i) != '-') {
			bitset_res.set(Calculus::N - 1 - i);
		}		
	}
	cout << bitset_res << endl;
	return bitset_res;
}

template std::bitset<Calculus::N>Calculus::calcIntersection<A, B>(A& obj1, B& obj2);
template std::bitset<Calculus::N>Calculus::calcIntersection<A, A>(A& obj1, A& obj2);
template std::bitset<Calculus::N>Calculus::calcIntersection<B, A>(B& obj1, A& obj2);
template std::bitset<Calculus::N>Calculus::calcIntersection<B, B>(B& obj1, B& obj2);


template <typename T1, typename T2>
static std::bitset<Calculus::N> Calculus::calcUnion(T1& obj1, T2& obj2) {
	std::bitset<Calculus::N> bitset_res;
	cout << "Об'єднання множин " << obj1.getName() << " та ";
	cout << obj2.getName() << ":\t";
	for (size_t i = 0; i < Calculus::N; i++) {
		if (obj1.getElement(i) != '-' || obj2.getElement(i) != '-') {
			bitset_res.set(Calculus::N - 1 - i);
		}
	}
	cout << bitset_res << endl;
	return bitset_res;
}

template std::bitset<Calculus::N>Calculus::calcUnion<A, B>(A& obj1, B& obj2);
template std::bitset<Calculus::N>Calculus::calcUnion<A, A>(A& obj1, A& obj2);
template std::bitset<Calculus::N>Calculus::calcUnion<B, A>(B& obj1, A& obj2);
template std::bitset<Calculus::N>Calculus::calcUnion<B, B>(B& obj1, B& obj2);


template <typename T1, typename T2>
static std::bitset<Calculus::N> Calculus::calcDifference(T1& obj1, T2& obj2) {
	std::bitset<Calculus::N> bitset_res;
	cout << "Різниця множин " << obj1.getName() << " та ";
	cout << obj2.getName() << ":\t";
	for (size_t i = 0; i < Calculus::N; i++) {
		if (obj1.getElement(i) != '-' && obj1.getElement(i) != obj2.getElement(i)) {
			bitset_res.set(Calculus::N - 1 - i);
		}
	}
	cout << bitset_res << endl;
	return bitset_res;
}

template std::bitset<Calculus::N>Calculus::calcDifference<A, B>(A& obj1, B& obj2);
template std::bitset<Calculus::N>Calculus::calcDifference<A, A>(A& obj1, A& obj2);
template std::bitset<Calculus::N>Calculus::calcDifference<B, A>(B& obj1, A& obj2);
template std::bitset<Calculus::N>Calculus::calcDifference<B, B>(B& obj1, B& obj2);

template <typename T1, typename T2>
static std::bitset<Calculus::N> Calculus::calcSymmetric(T1& obj1, T2& obj2) {
	std::bitset<Calculus::N> bitset_res;
	cout << "Симетрична різниця множин " << obj1.getName() << " та ";
	cout << obj2.getName() << ":\t";
	for (size_t i = 0; i < Calculus::N; i++) {
		char element1 = obj1.getElement(i);
		char element2 = obj2.getElement(i);
		if ((element1 != '-' && (element1 != element2)) ||
			(element2 != '-' && (element2 != element1)))
			bitset_res.set(Calculus::N - 1 - i);

	}
	cout << bitset_res << endl;
	return bitset_res;
}

template std::bitset<Calculus::N>Calculus::calcSymmetric<A, B>(A& obj1, B& obj2);
template std::bitset<Calculus::N>Calculus::calcSymmetric<A, A>(A& obj1, A& obj2);
template std::bitset<Calculus::N>Calculus::calcSymmetric<B, A>(B& obj1, A& obj2);
template std::bitset<Calculus::N>Calculus::calcSymmetric<B, B>(B& obj1, B& obj2);