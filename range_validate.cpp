#include <iostream>
#include <limits>
#include "random_number.h"

using std::cin;
using std::cout;
using std::endl;

int range_validate(int start, int end)
{
    while (start >= end)
    {
        cout << "\nError! Enter the range numbers (example: 1 50): ";
        cin >> start >> end;
    }

    return random_number(start, end);
}