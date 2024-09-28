#include"D_class.h"

#include"Includes.h"

void D::delMatrix() {
    if (SetMatrix != nullptr) {
        for (size_t i = 0; i < R; i++) {
            delete[] SetMatrix[i];
        }
        delete[] SetMatrix;
        SetMatrix = nullptr;
    }
}

void D::genMatrix() {
    if (SetMatrix != nullptr) 
        this->delMatrix();
    SetMatrix = new char* [R];

    for (size_t i = 0; i < R; i++) {
        SetMatrix[i] = new char[C]; 
    }

    for (size_t i = 0; i < R; i++) {
        for (size_t j = 0; j < C; j++) {
            SetMatrix[i][j] = ' ';
        }
    }

}
char D::getElement(size_t row, size_t column) const {
    if (row >= this->R || column >= this->C) {
        return ' ';
    }
    char element = this->SetMatrix[row][column];    
    return element;
}

void D::printCartesianProduction() {
    cout << "Декартовий добуток: " << endl;
    
    for (size_t i = 0; i < this->R; i++) {
        cout << "Індекс " << i + 1 << ": ";
        cout << "(";

        for (size_t j = 0; j < this->C; j++) {
            cout << SetMatrix[i][j];
            if (j < 2) {
                cout << ", ";
            }
        }

        cout << ")" << endl;
    }
}

template <typename T1, typename T2, typename T3>
void D::calcCartProd(T1& obj1, T2& obj2, T3& obj3) {
    size_t rows = obj1.getSetSize() * obj2.getSetSize() * obj3.getSetSize();
    this->setMatrixRows(rows);
    this->genMatrix();
    
    cout << this->getName() << " = " << obj1.getName() << " X ";
    cout << obj2.getName() << " X " << obj3.getName();
    cout << " - містить " << this->R << " комбінацій по " << this->C;
    cout << " елементів." << endl;

    size_t index = 0;

    for (size_t i = 0; i < obj1.getSetSize(); i++) {
        char el1 = obj1.getElement(i);        
        for (size_t j = 0; j < obj2.getSetSize(); j++) {
            char el2 = obj2.getElement(j);            
            for (size_t k = 0; k < obj3.getSetSize(); k++) {
                char el3 = obj3.getElement(k);
                SetMatrix[index][0] = el1;
                SetMatrix[index][1] = el2;
                SetMatrix[index][2] = el3;
                index++;
            }
        }
    }
}

template void D::calcCartProd<A, A, A>(A& obj1, A& obj2, A& obj3);
template void D::calcCartProd<A, A, B>(A& obj1, A& obj2, B& obj3);
template void D::calcCartProd<A, A, C>(A& obj1, A& obj2, class C& obj3);
template void D::calcCartProd<A, B, A>(A& obj1, B& obj2, A& obj3);
template void D::calcCartProd<A, B, B>(A& obj1, B& obj2, B& obj3);
template void D::calcCartProd<A, B, C>(A& obj1, B& obj2, class C& obj3);
template void D::calcCartProd<A, C, A>(A& obj1, class C& obj2, A& obj3);
template void D::calcCartProd<A, C, B>(A& obj1, class C& obj2, B& obj3);
template void D::calcCartProd<A, C, C>(A& obj1, class C& obj2, class C& obj3);

template void D::calcCartProd<B, A, A>(B& obj1, A& obj2, A& obj3);
template void D::calcCartProd<B, A, B>(B& obj1, A& obj2, B& obj3);
template void D::calcCartProd<B, A, C>(B& obj1, A& obj2, class C& obj3);
template void D::calcCartProd<B, B, A>(B& obj1, B& obj2, A& obj3);
template void D::calcCartProd<B, B, B>(B& obj1, B& obj2, B& obj3);
template void D::calcCartProd<B, B, C>(B& obj1, B& obj2, class C& obj3);
template void D::calcCartProd<B, C, A>(B& obj1, class C& obj2, A& obj3);
template void D::calcCartProd<B, C, B>(B& obj1, class C& obj2, B& obj3);
template void D::calcCartProd<B, C, C>(B& obj1, class C& obj2, class C& obj3);

template void D::calcCartProd<C, A, A>(class C& obj1, A& obj2, A& obj3);
template void D::calcCartProd<C, A, B>(class C& obj1, A& obj2, B& obj3);
template void D::calcCartProd<C, A, C>(class C& obj1, A& obj2, class C& obj3);
template void D::calcCartProd<C, B, A>(class C& obj1, B& obj2, A& obj3);
template void D::calcCartProd<C, B, B>(class C& obj1, B& obj2, B& obj3);
template void D::calcCartProd<C, B, C>(class C& obj1, B& obj2, class C& obj3);
template void D::calcCartProd<C, C, A>(class C& obj1, class C& obj2, A& obj3);
template void D::calcCartProd<C, C, B>(class C& obj1, class C& obj2, B& obj3);
template void D::calcCartProd<C, C, C>(class C& obj1, class C& obj2, class C& obj3);