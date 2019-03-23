/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The implementation file for the Hatch class, an 
**                  inherited class of the Space class. Hatch.cpp
**                  defines the virtual functions for a Hatch Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>

#include "Hatch.hpp"

using std::cin;
using std::cout;
using std::endl;

//Constructor
Hatch::Hatch()
{
    spaceName = "hatch";
    item = "canned meat and vegetables";
    visitCounter = 0;
}

//Virtual function for calling a random event/special action for the hatch 
int Hatch::randomEvent()
{
    int event = rand() % 4 + 1;

    int outcome;

    //Switch statement to for a random event to occur
    switch (event)
    {
        //Player locks themselves in the hatch
        case 1:
            cout << "You made your way into the hatch and soon realized you were trapped inside." << endl;
            cout << "You panicked and spent hours hyperventilating before trying to get the door open." << endl;
            cout << "Eventually you were successful." << endl;
            cout << endl;
            cout << "Time used: 3 hours" << endl;
            outcome = 3;
            break;

        //Player eats random canned meat/vegetables and then dies of botulism as a result
        case 2:
            cout << "You found a stockpile of canned meat and vegetables. Sure, the cans looked" << endl;
            cout << "questionable, but you were so hungry and desperate for food that you didn't" << endl;
            cout << "think twice before devouring the contents." << endl;
            cout << endl;
            cout << "You died of botulism." << endl;
            outcome = 120;
            break;
        
        //Player studies maps of the island
        case 3:
            cout << "You found a collection of old maps of the island. You spent time studying them" << endl;
            cout << "in hopes of gaining some useful information." << endl;
            cout << endl;
            cout << "Time used: 2 hours" << endl;
            outcome = 2;
            break;
        
        //Player falls asleep
        case 4:
            cout << "The dark environment of the hatch and its comfy chairs tempted you to sleep." << endl;
            cout << endl;
            cout << "Time used: 6 hours" << endl;
            outcome = 6;
            break;
    }
    return outcome;

}

//Virtual function for printing the move menu for user
int Hatch::moveMenu()
{
    //Variable to hold the move selection of the user
    int move;
    cout << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cout << "'                                                      '" << endl;
	cout << "'          What would you like to do next?             '" << endl;
    cout << "'                                                      '" <<endl;
	cout << "'    1. Go back to the forest - travel time: 1 hour    '" << endl;
	cout << "'    2. Devour some canned meat and vegetables         '" << endl;
    cout << "'    3. Read a book in the hatch                       '" << endl;
    cout << "'    4. Take a nap                                     '" << endl;
    cout << "'                                                      '" <<endl;
	cout << "'         Please enter your selection:                 '" << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cin >> move;

    /*Checks that the user makes a valid selection from the menu options
    and prompts them to input a valid selection of 1 - 4 until they
    do. This while loop will check for char/doubles values, integers greater
    than 4 or less than 1. The setw(1) will ensure only the first
    piece of user input is set to choice. */
    while (!cin.good() || cin.peek() != '\n' || move > 4 || move < 1)
    {  
	    cin.clear();
	    cin.ignore(256, '\n');
        cout << endl;
        cout << "ERROR: invalid input....make a decision!" << endl;
        cout << "What do you want to do next?" << endl;
	    cout << endl;
	    cout << "1. Go back to the forest - travel time: 1 hour" << endl;
	    cout << "2. Devour some canned meat and vegetables" << endl;
        cout << "3. Read a book in the hatch" << endl;
        cout << "4. Take a nap" << endl;
        cout << endl;
		cout << "Please make a valid selection:" << endl;
		cin >> move;
	}

    return move;
    
}

//Virtual function for printing the space for the user
void Hatch::printSpace()
{
    cout << "           You've found the mysterious hatch on the island." << endl;
    cout << "  __________________________________________________________________   " << endl;
    cout << " |__________________________________________________________________|  " << endl;  
    cout << " | __     __   _  _ _ _||_|_|_|_|_|_|_|_|_|_|_| __ _ _  _ _ _  __ _ |  " << endl;
    cout << " ||  |__ |--|_| || |_| |_|_|_|_|_|_|_|_|_|_|_|||xx| | ||~|~| ||  | ||  " << endl;
    cout << " ||==|  ||--| |~||-| |=||_|_|_|_|_|_|_|_|_|_|_||  |=|=|| | |~||==|~||  " << endl;
    cout << " ||  |==||  |=| || | | |_|_|_|_|_|_|_|_|_|_|_|||==|=|=||-|-|~||()|~||  " << endl;
    cout << " ||__|__||__|_|_||_|_|_||_|_|_|_|_|_|_|_|_|_|_||__|_|_||_|_|_||__|_||  " << endl;
    cout << " |_____________________|_|_|_|_|_|_|_|_|_|_|_||_____________________|  " << endl;
    cout << " | _ _ _ _ _ _ _ _ _ _ ||_|_|_|_|_|_|_|_|_|_|_| _ __ _ _  _ _ __  _ |  " << endl;
    cout << " ||~|~|~|~|~|~|~|~|~|~||_|_|_|_|_|_|_|_|_|_|_||| |  |_| ||$| |==|| ||  " << endl;
    cout << " ||*|*|*|*|*|*|*|*|*|*|||_|_|_|_|_|_|_|_|_|_|_||#|//|+|=||||~|xx||~||  " << endl;  
    cout << " ||_|_|_|_|_|_|_|_|_|_||_|_|_|_|_|_|_|_|_|_|_|||_|__|_|_||_|_|__||_||  " << endl;
    cout << " |=================,;,/________________________l,;,=================|  " << endl;  
    cout << " |                ;(;);                        ;(;);                |  " << endl;  
    cout << " |                 =;============================;=                 |  " << endl;
    cout << " |     .-------.    [_|_|_]=================[_|_|_]   .-------.     |  " << endl;
    cout << " |     |       |    [__|__] [__|__] [__|__] [__|__]   |       |     |  " << endl;
    cout << " |     |   *   |    [_|_|_] [__|__] [__|__] [_|_|_]   |   *   |     |  " << endl;
    cout << " |     |       |    [_|_|_] [__|__] [__|__] [_|_|_]   |       |     |  " << endl;
    cout << " |     ()_____  ()  [_|_|_]  |-----------|  [_|_|_] ()  _____()     |  " << endl;
    cout << " |     ||_______||  [__|__]                 [__|__] ||_______||     |  " << endl;
    cout << " |_____||_______||_/______________________________l_||_______||_____|  " << endl;
    cout << "   ___ ||       |||________________________________|||       || ___    " << endl;
    cout << "  `====||=======||==================================||=======||====`   " << endl;
    cout << " `==================================================================`  " << endl;
    cout << " ====================================================================` " << endl;
    cout << " =====================================================================`   " << endl;
    cout << endl;
    cout << endl;

}

//Destructor
Hatch::~Hatch()
{

}
