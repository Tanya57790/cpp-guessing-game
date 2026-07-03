#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Welcome to Guessing game!\n\n";

    std::random_device rd;
    std::mt19937 gen(rd());

    int start{};
    int end{};

    cout << "Specify a range of numbers" << endl;

    cout << "start number: ";
    cin >> start;

    cout << "end number: ";
    cin >> end;
    cout << "\n";

    std::uniform_int_distribution<int> distrib(start, end);

    int guessing_number{};
    int random_number{distrib(gen)};

    while (true)
    {
        cout << "Guess the number: ";
        cin >> guessing_number;

        if (guessing_number == random_number)
        {
            cout << "You win!" << endl;
            break;
        }
    }
}