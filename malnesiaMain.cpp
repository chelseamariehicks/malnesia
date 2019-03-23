/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The main file for executing a game of Malnesia. Creates
**                  an object for GamePlay and calls the menu function,
**                  which will run through the steps of an entire game
**                  using various functions and classes. The menu will 
**                  be called at the end of each game unless the user
**                  selects to quit.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

#include "GamePlay.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Used for generating random numbers
    std::srand(std::time(0));

    //Creates an object of GamePlay
    GamePlay Malnesia;

    /*While loop calls the menu function, which will follow by going through
    the gameLoop if the user selects to play. The user will be prompted with
    the menu after every game unless they decide to quit, in which case the 
    while loop will be exited. */
    while (Malnesia.menu() != 2)
	{
		cout << endl;
	}

    return 0;
}