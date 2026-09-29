#pragma once
#include "IMath.h"
#include <iostream>
using namespace std;

class Array : public IMath
{
private:
    int* arr;
    int size;

public:
    Array(int* a, int s);
    ~Array();

    int Max() override;
    int Min() override;
    float Avg() override;
    bool Search(int valueToSearch) override;
};