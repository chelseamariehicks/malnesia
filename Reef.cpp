/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The implementation file for the Reef class, an 
**                  inherited class of the Space class. Reef.cpp
**                  defines the virtual functions for a Reef Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>

#include "Reef.hpp"

using std::cout;
using std::cin;
using std::endl;

//Constructor
Reef::Reef()
{
    spaceName = "reef";
    item = "rope";
    visitCounter = 0;
}

//Virtual function for calling a random event/special action for the reef 
int Reef::randomEvent()
{
    int event = rand() % 3 + 1;

    int outcome;

    //Switch statement to for a random event to occur
    switch (event)
    {
        //Player gets distracted by world's last remaining coral reef
        case 1:
            cout << "It's been ages since you've seen a coral reef--most disappeared from the" << endl;
            cout << "planet years ago. You're in awe of the world's last remaining coral reef" << endl;
            cout << "and spend time examining it." << endl;
            cout << endl;
            cout << "Time used: 2 hours" << endl;
            outcome = 2;
            break;

        //Player cuts their feet on the coral reef
        case 2:
            cout << "While wading in the water, you cut your foot badly on the coral. You attempted" << endl;
            cout << "to clean and dress the wound with materials found on the beach, and the whole" << endl;
            cout << "process really slowed you down." << endl;
            cout << endl;
            cout << "Time used: 4 hours" << endl;
            outcome = 4;
            break;
        
        //Player tries to catch fish
        case 3:
            cout << "You decided to try your luck at fishing and managed to catch a few fish." << endl;
            cout << "Bon appetit!" << endl;
            cout << endl;
            cout << "Time used: 4 hours" << endl;
            outcome = 4;
            break;
    }
    return outcome;
}

//Virtual function for printing the move menu for user
int Reef::moveMenu()
{
    //Variable to hold the move selection of the user
    int move;
    cout << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cout << "'                                                      '" << endl;
	cout << "'          What would you like to do next?             '" << endl;
    cout << "'                                                      '" << endl;
	cout << "'    1. Go to the shore - travel time: 2 hours         '" << endl;
	cout << "'    2. Attempt to catch some fish                     '" << endl;
    cout << "'    3. Collect bleached coral                         '" << endl;
    cout << "'    4. Build your raft                                '" << endl;
    cout << "'                                                      '" << endl;
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
	    cout << "1. Go to the shore - travel time: 2 hours" << endl;
	    cout << "2. Attempt to catch some fish" << endl;
        cout << "3. Collect bleached coral" << endl;
        cout << "4. Build your raft" << endl;
        cout << endl;
		cout << "Please make a valid selection:" << endl;
		cin >> move;
	}

    return move;
}

//Virtual function for printing the space for the user
void Reef::printSpace()
{
    cout << "                           You've made it to the island reef" << endl;
    cout << endl;
    cout << "                                      . " << endl;
    cout << "            " << endl;
    cout << "                                      |           . " << endl;
    cout << "                          .           .          ' " << endl;
    cout << "                           l          |         / " << endl;
    cout << "                            '         |        .             . " << endl;
    cout << "                  .          l                /          . " << endl;
    cout << "                     '  .     l       |      /       . '   " << endl;
    cout << " .,.,.                     ` .   .,+~'`^`'~+,.     , '  " << endl;
    cout << " &&&&&&,  ,^^^^.  . ._ ..__ _  .'             '. '_ __ ____ __ _ .. .  . " << endl;
    cout << " #########^^^^^^##&&;_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-., " << endl;
    cout << " &&&&&##################&&;,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~= " << endl;
    cout << " #####&&&&&&&&&&&####&&&_,.;^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__, " << endl;
    cout << " #########&&&&&&&&&-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-==--^'~=-.,__,.-=~' " << endl;
    cout << " ##mjy#####*'' " << endl;
    cout << " _,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,.-=~'`^`'~=-.,__,.-=~' " << endl;
    cout << endl;
    cout << " ~`'^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^ " << endl;
    cout << endl;
    cout << endl;

}

//Destructor
Reef::~Reef()
{

}
