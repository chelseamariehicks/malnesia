/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The implementation file for the Peak class, an 
**                  inherited class of the Space class. Peak.cpp
**                  defines the virtual functions for a Peak Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>

#include "Peak.hpp"

using std::cin;
using std::cout;
using std::endl;

//Constructor
Peak::Peak()
{
    spaceName = "peak";
    item = "an ax";
    visitCounter = 0;
}

//Virtual function for calling a random event/special action for the peak 
int Peak::randomEvent()
{
    //Generate a random number between 1-5
    int event = rand() % 5 + 1;

    //Variable to hold the resulting hours used in random event
    int outcome;

    //Switch statement to for a random event to occur
    switch (event)
    {
        //Player spends time looking for easier path
        case 1:
            cout << "That hike to the peak was brutal. There must be an easier way down." << endl;
            cout << "Unfortunately, your effort to search for a better path was just time wasted." << endl;
            cout << "You will have to go back the way you came." << endl;
            cout << endl;
            cout << "Time used: 2 hours" << endl;
            outcome = 2;
            break;

        //Player tries to build a help sign out of rocks
        case 2:
            cout << "This is the highest peak on the mountain and the perfect spot to place a call" << endl;
            cout << "for help. You spend several hours gathering rocks and debris to write out HELP" << endl;
            cout << "near the edge of the cliff." << endl;
            cout << endl;
            cout << "Time used: 5 hours" << endl;
            outcome = 5;
            break;
        
        //Player takes a panoramic photo of the view--it's spectacular
        case 3:
            cout << "The view up here is spectacular and definitely worth capturing in photos." << endl;
            cout << "Once you make it off this island, you'll share this footage with others." << endl;
            cout << endl;
            cout << "Time used: 0 hour--it doesn't take much time to snap a photo" << endl;
            outcome = 0;
            break;
        
        //Player tripped over some rocks and needs time to recover
        case 4:
            cout << "You made it to the highest point on the island! Unfortunately, you twisted" << endl;
            cout << "your ankle on some rocks once you made it to the top. You won't be moving" << endl;
            cout << "any time soon." << endl;
            cout << endl;
            cout << "Time used: 8 hours" << endl;
            outcome = 8;
            break;
        
        //Player fell over the ledge and dies
        case 5:
            cout << "You made it to the highest point on the island! Unfortunately, you leaned" << endl;
            cout << "too far over the edge of the cliff and lost your balance." << endl;
            cout << "You fell to your death in Malnesia." << endl;
            outcome = 120;
            break;
    }
    return outcome;
}

//Virtual function for printing the move menu for user
int Peak::moveMenu()
{
    //Variable to hold the move selection of the user
    int move;
    cout << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cout << "'                                                      '" << endl;
	cout << "'          What would you like to do next?             '" << endl;
    cout << "'                                                      '" <<endl;
	cout << "'    1. Go back to the forest - travel time: 3 hours   '" << endl;
	cout << "'    2. Watch the sunset, it may be your last          '" << endl;
    cout << "'    3. Go to sleep                                    '" << endl;
    cout << "'    4. Check for cell service                         '" << endl;
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
	    cout << "1. Go back to the forest - travel time: 4 hours" << endl;
	    cout << "2. Watch the sunset, it may be your last" << endl;
        cout << "3. Go to sleep" << endl;
        cout << "4. Check for cell service" << endl;
        cout << endl;
		cout << "Please make a valid selection:" << endl;
		cin >> move;
	}

    return move;
}

//Virtual function for printing the space for the user
void Peak::printSpace()
{
  	cout << "           You've made it to the highest peak in Malnesia! " << endl;
    cout << endl; 
	cout << "    .        |      /	" << endl;			
    cout << "     l       .     .	" << endl;			
    cout << "             |    / " << endl;
    cout << "       l  ,g88R_   " << endl;
    cout << "         d888(`  ).                   _    " << endl;
    cout << " -  --== 888(     ).=--           .+(`  )`.    " << endl;
    cout << "         Y8P(       '`.          :(   .    )   " << endl;
    cout << "        .+(`(      .   )     .--  `.  (    ) ) " << endl;
    cout << "       ((    (..__.:'-'   .=(   )   ` _`  ) )  " << endl;
    cout << "`.     `(       ) )       (   .  )     (   )  ._   " << endl;
    cout << "  )      ` __.:'   )     (   (   ))     `-'.:(`  ) " << endl;
    cout << ")  )  ( )       --'       `- __.'         :(      ))   " << endl;
    cout << "                                            ` __.:'    " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                      _____..___ ..'''..''____...''''.._______ " << endl;
    cout << "                 /'' '          /      ...   ''  ...           " << endl;
    cout << "               !' '/`       /''    '``     ..  ./              " << endl;
    cout << "              !' / '' l   /       .''.     ...       '''...    " << endl;
    cout << "           !'``   ''                                           " << endl; 
    cout << "          !'    '   '   /  ''''   ...    ''      ``            " << endl;
    cout << "         '!                                                    " << endl;
    cout << "        '! '  ''''  .. / ' `  `     .. ``       ..  ''         " << endl;
    cout << "        '! ..  ''         ``          /                  ..    " << endl;
    cout << "      '!` ''      / ''      ''  ``        ..``   '''           " << endl;
    cout << "     '!` .. ''   /      ''''       ...         '''''''  ``` .. " << endl;
    cout << "     '!    '''                   /           /         ...     " << endl;
    cout << "____'`!    . ..   ....  ....     .....   .... ....     .... .. " << endl;
    cout << endl;
    cout << endl;

}

//Destructor
Peak::~Peak()
{

}
