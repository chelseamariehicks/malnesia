/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The implementation file for the Forest class, an 
**                  inherited class of the Space class. Forest.cpp
**                  defines the virtual functions for a Forest Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>

#include "Forest.hpp"

using std::cout;
using std::cin;
using std::endl;

//Constructor
Forest::Forest()
{
    spaceName = "forest";
    item = "timber";
    visitCounter = 0;
}

//Virtual function for calling a random event/special action for the forest 
int Forest::randomEvent()
{
    int event = rand() % 4 + 1;

    int outcome;

    //Switch statement to for a random event to occur
    switch (event)
    {
        //Player gets attacked by wild boar
        case 1:
            cout << "Sucks to your ass-mar. A singular of wild boar attacked you in the forest!" << endl;
            cout << "Luckily you survived, but you hardly made it out unscathed. The injuries you" << endl;
            cout << "sustained will require some time to rest." << endl;
            cout << endl;
            cout << "Time used: 5 hours" << endl;
            outcome = 5;
            break;

        //Player gets lost
        case 2:
            cout << "You're not sure how it happened, but you got lost." << endl;
            cout << "Eventually you found your way." << endl;
            cout << endl;
            cout << "Time used: 4 hours" << endl;
            outcome = 4;
            break;
        
        //Player tries to track mysterious polar bears
        case 3:
            cout << "This forest is dark and full of terrors, and you're certain you spotted a polar bear" << endl;
            cout << "lurking through the trees. The idea is absurd, but you had to follow the tracks." << endl;
            cout << "Unfortunately, you found nothing to verify what you thought you'd seen." << endl;
            cout << endl;
            cout << "Time used: 3 hours" << endl;
            outcome = 3;
            break;
        
        //Player uses time wisely
        case 4:
            cout << "There's no time to waste. You're determined to acquire the materials you need " << endl;
            cout << "to get off of this godforsaken island." << endl;
            outcome = 0;
            break;
    }
    return outcome;
}

//Virtual function for printing the move menu for user
int Forest::moveMenu()
{
    //Variable to hold the move selection of the user
    int move;
    cout << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cout << "'                                                      '" << endl;
	cout << "'          What would you like to do next?             '" << endl;
    cout << "'                                                      '" <<endl;
	cout << "'    1. Go to the hatch - travel time: 1 hour          '" << endl;
	cout << "'    2. Go to basecamp - travel time: 1 hour           '" << endl;
    cout << "'    3. Hike to the peak - travel time: 4 hours        '" << endl;
    cout << "'    4. Explore the forest                             '" << endl;
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
	    cout << "1. Go to the hatch - travel time: 1 hour " << endl;
	    cout << "2. Go to basecamp - travel time: 1 hour " << endl;
        cout << "3. Hike to the peak - travel time: 4 hours" << endl;
        cout << "4. Explore the forest" << endl;
        cout << endl;
		cout << "Please make a valid selection:" << endl;
		cin >> move;
	}

    return move;   
}

//Virtual function for printing the space for the user
void Forest::printSpace()
{
    cout << "                        Welcome to the forest" << endl;
    cout << endl;
    cout << "       # #### ####                             &&& &&  & &&  " << endl;          
    cout << "      ### l/#|### |/####                  && &l/&l|& ()|/ @, &&  " << endl;
    cout << "     ##l/#/ l||/##/_/##/_#                &l/(/&/&||/& /_/)_&/_&  " << endl;
    cout << "   ###  l/###|/ l/ # ###               &() &l/&|()|/&l/ '@' & ()   " << endl;
    cout << " ##_l_#l_l## | #/###_/_####           &__&&_l |& |&&/&__&_/_& &&  " << endl;
    cout << "## #### # l #| /  #### ##/##         &&   && & &| &| /& & @()& /&&  " << endl;
    cout << " __#_--###`  |{,###---###-~          ()&_---()&l&l|&&-&&--@---()~   " << endl;
    cout << "           l }{                            &&     l|||   " << endl;
    cout << "            }}{                                    |||   " << endl;
    cout << "            }}{                                    |||   " << endl;
    cout << "            {{}                                    |||   " << endl;
    cout << "____''..___-=-~{ .-^- _______.._____''''..___, -=-~  .-^- _  " << endl;
    cout << endl;
    cout << endl;

}

//Destructor
Forest::~Forest()
{

}
