/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The implementation file for the Shore class, an 
**                  inherited class of the Space class. Shore.cpp
**                  defines the virtual functions for a Shore Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>

#include "Shore.hpp"

using std::cout;
using std::cin;
using std::endl;

//Constructor
Shore::Shore()
{
    spaceName = "shore";
    item = "Wilson volleyball";
    visitCounter = 0;
}

//Virtual function for calling a random event/special action for the shore 
int Shore::randomEvent()
{
    int event = rand() % 4 + 1;

    int outcome;

    //Switch statement to for a random event to occur
    switch (event)
    {
        //Player spends time on the shore
        case 1:
            cout << "You figure it's best to make the most of the experience and spend" << endl;
            cout << "some time relaxing to the sound of the ocean waves on the beach." << endl;
            cout << endl;
            cout << "Time used: 3 hours" << endl;
            outcome = 3;
            break;

        //Player eats crab and gets sick
        case 2:
            cout << "You managed to find a recently deceased crab and decided to get some nutrition." << endl;
            cout << "Unfortunately, your innards didn't agree with you and you emptied your stomach" << endl;
            cout << "into the sea. You required several hours of recovery." << endl;
            cout << endl;
            cout << "Time used: 5 hours" << endl;
            outcome = 5;
            break;
        
        //Player climbs the tree to acquire coconuts
        case 3:
            cout << "You spotted some coconuts in the tree and managed to climb up to get some." << endl;
            cout << endl;
            cout << "Time used: 1 hour" << endl;
            outcome = 1;
            break;
        
        //Player has a heart to heart with Wilson
        case 4:
            cout << "It's hard to believe you're stuck on this island alone. Out of desperation " << endl;
            cout << "you begin talking with your only friend, Wilson--the volleyball you found" << endl;
            cout << "on the shore. Wilson doesn't say much, or anything, but it's relieving to" << endl;
            cout << "feel less alone." << endl;
            cout << endl;
            cout << "Time used: 2 hours" << endl;
            outcome = 2;
            break;
    }
    return outcome;
}

//Virtual function for printing the move menu for user
int Shore::moveMenu()
{
    //Variable to hold the move selection of the user
    int move;
    cout << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cout << "'                                                      '" << endl;
	cout << "'          What would you like to do next?             '" << endl;
    cout << "'                                                      '" <<endl;
	cout << "'    1. Go to the reef - travel time: 2 hours          '" << endl;
	cout << "'    2. Go to basecamp - travel time: 1 hour           '" << endl;
    cout << "'    3. Remain at the shore                            '" << endl;
    cout << "'    4. Build your raft                                '" << endl;
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
	    cout << "1. Go to the reef - travel time: 2 hours" << endl;
	    cout << "2. Go to basecamp - travel time: 1 hour" << endl;
        cout << "3. Remain at the shore" << endl;
        cout << "4. Build your raft" << endl;
        cout << endl;
		cout << "Please make a valid selection:" << endl;
		cin >> move;
	}

    return move;
}

//Virtual function for printing the space for the user
void Shore::printSpace()
{
    cout << "         The stunning seashore of Malnesia's main beach" << endl;
    cout << endl;
    cout << "                               ##### " << endl;
    cout << "                       ####### " << endl;
    cout << "            ######    ########       ##### " << endl;
    cout << "        ###########/#####l#####  ############# " << endl;
    cout << "    ############/##########--##################### " << endl;
    cout << "  ####         ######################          ##### " << endl;
    cout << " ##          ####      ##########/@@              ### " << endl;
    cout << " #          ####        ,-.##/`.#l#####               ## " << endl;
    cout << "          ###         /  |$/  |,-. ####                 # " << endl;
    cout << "         ##           l_,'$l_,'|  l  ###   " << endl;
    cout << "         #              l_$$$$$`._/   ##   " << endl;
    cout << "                          $$$$$_/     ##   " << endl;
    cout << "                          $$$$$        #   " << endl;
    cout << "                          $$$$$    " << endl;
    cout << "                          $$$$$    " << endl;
    cout << "                          $$$$$    " << endl;
    cout << "                          $$$$$    " << endl;
    cout << "                         $$$$$ " << endl;
    cout << "                         $$$$$   "  << endl;
    cout << "                         $$$$$ " << endl;
    cout << "                         $$$$$         __ " << endl;
    cout << "                         $$$$$    _.-'    `-.  " << endl;
    cout << "                        $$$$$   ,'           `. " << endl;
    cout << "                        $$$$$  /               l " << endl;
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~$$$$$~~~'~~~~~~~~~~~~~~~~`~~~~~~~~~~~~" << endl;
    cout << "    ~      ~  ~    ~  ~ $$$$$  ~   ~       ~   ~       ~ " << endl;
    cout << "   ~    ~ ~    ~   ~    $$$$$     ~    ~  ~    ~    ~    " << endl;
    cout << "  ~     ~       ~ ^   ~ $$$$$~        ~  ~      ~        ~ " << endl;
    cout << " _______________________$$$$$_______________________________ " << endl;
    cout << "                        $$$$$        " << endl;
    cout << "                        $$$$$    " << endl;   
    cout << "                        $$$$$      " << endl;
    cout << "                        $$$$$      " << endl;
    cout << "                        $$$$$    " << endl;  
    cout << "                       $$$$$$$   " << endl;        
    cout << "                       $$$$$$$    " << endl;      
    cout << "                      $$$$$$$$$    " << endl;
    cout << " .....................$$$$$$$$$................................." << endl;
    cout << endl;
    cout << endl;
}

//Destructor
Shore::~Shore()
{

}
