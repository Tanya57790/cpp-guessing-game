#include <iostream>

using std::cout;
using std::endl;

int attempts_checking(int attempts)
{
    if (attempts <= 5)
    {
        cout << "Excellent result!" << endl;
    }
    else if (attempts >= 6 && attempts <= 10)
    {
        cout << "Not bad." << endl;
    }
    else
    {
        cout << "Try a narrower range." << endl;
    }

    return 0;
}