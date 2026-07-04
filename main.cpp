#include <iostream>
#include <random>
#include "random_number.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Welcome to Guessing game!\n\n";
    cout << "Specify a range of numbers\n";

    int start{};
    int end{};

    cout << "start number: ";
    cin >> start;

    cout << "end number: ";
    cin >> end;
    cout << "\n";

    int random_num{random_number(start, end)};

    int guessing_number{};

    while (true)
    {
        cout << "Guess the number: ";
        cin >> guessing_number;

        if (guessing_number == random_num)
        {
            cout << "You win!" << endl;
            break;
        }
        else if (guessing_number <= random_num)
        {
            cout << "Too small!" << endl;
            continue;
        }
        else if (guessing_number >= random_num)
        {
            cout << "Too big!" << endl;
            continue;
        }
    }
}