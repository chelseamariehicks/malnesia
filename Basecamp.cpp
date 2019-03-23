/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The implementation file for the Basecamp class, an 
**                  inherited class of the Space class. Basecamp.cpp
**                  defines the virtual functions for a Basecamp Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>

#include "Basecamp.hpp"

using std::cout;
using std::cin;
using std::endl;

//Constructor
Basecamp::Basecamp()
{
    spaceName = "basecamp";
    item = "toolbox";
    visitCounter = 0;
}

//Virtual function for calling a random event/special action for the basecamp 
int Basecamp::randomEvent()
{
    int event = rand() % 3 + 1;

    int outcome;

    //Switch statement to for a random event to occur
    switch (event)
    {
        //Player searches for food
        case 1:
            cout << "At basecamp you search through the tents and main shelter for any leftover" << endl;
            cout << "food. To your delight, you found a trove of MREs. Something is better than" << endl;
            cout << "nothing." << endl;
            cout << endl;
            cout << "Time used: 3 hours" << endl;
            outcome = 3;
            break;

        //Player sleeps
        case 2:
            cout << "The sight of a cot with a pillow and blanket makes you weak in the knees." << endl;
            cout << "You take this opportunity to catch some zzz's." << endl;
            cout << endl;
            cout << "Time used: 6 hours" << endl;
            outcome = 6;
            break;
        
        //Player wastes no time
        case 3:
            cout << "There is no time to waste. You decide to carry onward." << endl;
            outcome = 0;
            break;
    }
    return outcome;
}

//Virtual function for printing the move menu for user
int Basecamp::moveMenu()
{
   //Variable to hold the move selection of the user
    int move;
    cout << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cout << "'                                                      '" << endl;
	cout << "'          What would you like to do next?             '" << endl;
    cout << "'                                                      '" << endl;
	cout << "'    1. Go to the shore - travel time: 1 hour          '" << endl;
	cout << "'    2. Go to the forest - travel time: 1 hour         '" << endl;
    cout << "'    3. Relax in the basecamp shelter                  '" << endl;
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
	    cout << "1. Go to the shore - travel time: 1 hour " << endl;
	    cout << "2. Go to the forest - travel time: 1 hour" << endl;
        cout << "3. Relax in the basecamp shelter" << endl;
        cout << "4. Build your raft" << endl;
        cout << endl;
		cout << "Please make a valid selection:" << endl;
		cin >> move;
	}

    return move; 
}

//Virtual function for printing the space for the user
void Basecamp::printSpace()
{
    cout << "                          Welcome to Basecamp" << endl;
    cout << endl;
    cout << "          ____      " << endl;                  
    cout << "        /WWWI; l                  ____     " << endl;                        
    cout << "       /WWWWII; l=====;          /WI; l                 /l_ " << endl;            
    cout << "      /WWWWWII;..      l_    ___/WI;:. l              _/M; l  " << endl;  
    cout << "     /WWWWWIIIIi;..      l__/WWWIIII:.. l____        /MMI:  l   " << endl;
    cout << "   _/WWWWWIIIi;;;:...:   ;lWWWWWWIIIII;.     l     /MMWII;   l  " << endl;
    cout << "  /WWWWWIWIiii;;;.:.. :   ;lWWWWWIII;;;::     l___/MMWIIII;   l  " << endl;
    cout << " /WWWWWIIIIiii;;::.... :    ;|WWWWW ____        :;IMWIIIII;:   l   " << endl;   
    cout << "/WWWWWW        _____________________|  |_____                   l    " << endl; 
    cout << "              ________________________________" << endl;
    cout << "              _________________________________  " << endl;
    cout << "                ||___|___||||||||||||___|__|||    " << endl;       
    cout << "                ||___|___||||||||||||___|__|||  " << endl;                
    cout << "                ||||||||||||||||||||||||||||||ooooooooooooooooo " << endl; 
    cout << "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
    cout << endl;
    cout << endl;

}

//Destructor
Basecamp::~Basecamp()
{

}
