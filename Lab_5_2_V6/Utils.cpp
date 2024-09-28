#include"Includes.h"
#include"Utils.h"
#include<string>

template <typename T>
static void Utils::inputData(T& obj) {
    cout << "Множина " << obj.getName() << endl;
    for (int i = 0; i < obj.getSetSize(); i++)
        obj.setElement(i, i);
};

template <typename T>
static void Utils::printSet(T& obj) {
    cout << "Множина " << obj.getName() << " {";
    for (size_t i = 0; i < obj.getSetSize() - 1; i++)
        cout << obj.getElement(i) << ", ";
    cout << obj.getElement(obj.getSetSize() - 1) << "}" << endl;
}

template void Utils::inputData<A>(A& obj);
template void Utils::printSet<A>(A& obj);

template void Utils::inputData<B>(B& obj);
template void Utils::printSet<B>(B& obj);