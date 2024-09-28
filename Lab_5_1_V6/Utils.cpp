#include"Includes.h"
#include"Utils.h"
#include<string>

template <typename T> 
static void Utils::inputData(T& obj) {
    cout << "Множина " << obj.getName() << endl;

    while (true) {
        for (int i = 0; i < obj.getSetSize(); i++) {
            string input;
            cout << "Введіть значення " << i + 1 << " елементу множини(1 символ) : ";
            getline(cin, input);
            if (input.length() != 1) {
                cerr << "Будь ласка, введіть тільки 1 символ." << endl;
                i--;
                continue;
            }
            obj.setElement(i, input.at(0));            
        }
        break;
    }
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

template void Utils::inputData<C>(C& obj);
template void Utils::printSet<C>(C& obj);