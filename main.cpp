#include <iostream>
#include <random>
#include "random_number.h"
#include "range_validate.h"
#include "read_valid_int.h"

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
    start = read_valid_int(start);

    cout << "end number: ";
    end = read_valid_int(end);

    int random_num = range_validate(start, end);

    int guessing_number{};

    while (true)
    {
        cout << "Guess the number: ";
        guessing_number = read_valid_int(guessing_number);

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