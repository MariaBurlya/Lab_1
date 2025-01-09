#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <vector>

using namespace std;

struct Array{
    vector<int> M;

    void MPUSH(int index, int value);
    void MPUSH(int value);
    int MGET(int index);
    void MDEL(int index);
    void MSET(int index, int value);
    int LENGHT();
    void PRINT();
};

#endif
