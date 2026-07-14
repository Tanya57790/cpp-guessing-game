#include <iostream>
#include "read_valid_int.h"

using std::cout;

int read_game_difficulty(int game_difficulty)
{
    int diff = read_valid_int(game_difficulty);

    while (diff < 1 || diff > 4)
    {
        cout << "Error! Choice the game difficulty: ";
        diff = read_valid_int(diff);
    }

    return diff;
}