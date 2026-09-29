#include "Array.h"

Array::Array(int* a, int s)
{
    size = s;
    arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = a[i];
    }
}

Array::~Array()
{
    delete[] arr;
}

int Array::Max()
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int Array::Min()
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

float Array::Avg()
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (float)sum / size;
}

bool Array::Search(int valueToSearch)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == valueToSearch)
            return true;
    }

    return false;
}