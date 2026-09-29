#include "Array.h"

int main()
{
    int numbers[] = { 5, 2, 8, 1, 10 };

    Array arr(numbers, 5);

    cout << "Max: " << arr.Max() << endl;
    cout << "Min: " << arr.Min() << endl;
    cout << "Avg: " << arr.Avg() << endl;

    cout << "Search 8: " << arr.Search(8) << endl;
    cout << "Search 20: " << arr.Search(20) << endl;

    return 0;
}