#include "array.h"


void Array::MPUSH(int index, int value) {
    if (index < 0 || index > M.size()) {
        cout << "Индекс вне диапазона" << endl;
        return;
    }
    M.insert(M.begin() + index, value);
}

void Array::MPUSH(int value) {
    M.push_back(value);
}

int Array::MGET(int index) {
    if (index < 0 || index >= M.size()) {
        cout << "Индекс вне диапазона" << endl;
        return 0;
    }
    return M[index];
}

void Array::MDEL(int index) {
    if (index < 0 || index >= M.size()) {
        cout << "Индекс вне диапазона" << endl;
        return;
    }
    M.erase(M.begin() + index);
}

void Array::MSET(int index, int value) {
    if (index < 0 || index >= M.size()) {
        cout << "Индекс вне диапазона" << endl;
        return;
    }
    M[index] = value;
}

int Array::LENGHT() {
    return M.size();
}

void Array::PRINT() {
    for (int value : M) {
        cout << value << " ";
    }
    cout << endl;
}
