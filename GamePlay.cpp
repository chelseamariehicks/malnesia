/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The implementation file for the GamePlay class, which
**                  defines member functions for running the operations
**                  of the climate change inspired game, including the menu
**                  for the user to select whether or not to play and their
**                  character choice, the gameLoop to go through components
**                  of game play, and a function for clearing the screen.
**                  The default constructor and destructor are also declared here.
*************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define BLACKBACK "\033[40m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define BLUEBACK "\033[44m"
#define RED     "\033[31m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[93m"
#define BYELLOW  "\033[93m" 
#define GREY    "\033[90m"
#define MAGENTA "\033[35m" 

#include "GamePlay.hpp"
#include "TouristTina.hpp"
#include "AlainBombard.hpp"
#include "FyreFestPhil.hpp"
#include "MaryRobinson.hpp"
#include "Shore.hpp"
#include "Reef.hpp"
#include "Basecamp.hpp"
#include "Forest.hpp"
#include "Peak.hpp"
#include "Hatch.hpp"

using std::cout;
using std::cin;
using std::endl;

//Default constructor sets the time for a game to a default 10 days/240 hours and gamOver to false
GamePlay::GamePlay()
{
    gameOver = false;
    buildRaft = false;
    otherEscape = false;
    time = 0;
    backpack.reserve(5);
}

//Function sets the variable for game over
void GamePlay::setgameOver(bool gameOverIn)
{
    gameOver = gameOverIn;
}

//Function returns whether the game is over or not
bool GamePlay::getGameOver()
{
    return gameOver;
}

//Function sets the variable buildRaft
void GamePlay::setBuildRaft(bool buildRaftIn)
{
    buildRaft = buildRaftIn;
}

//Function returns whether player can build raft
bool GamePlay::getBuildRaft()
{
    return buildRaft;
}

//Function sets the variable otherEscape
void GamePlay::setOtherEscape(bool otherEscapeIn)
{
    otherEscape = otherEscapeIn;
}

//Function returns whether there is a different way to escape
bool GamePlay::getOtherEscape()
{
    return otherEscape;
}

//Function sets the amount of time left in the game
void GamePlay::setTime(int timeIn)
{
    time = timeIn;
}

//Function returns the amount of time left in the game
int GamePlay::getTime()
{
    return time;
}

//Function displays a menu for users to play the game and select characters
int GamePlay::menu()
{
    //Variable to hold the choice the user selects from the menu
	int choice;

    //Clear the screen and display the menu below
    clearScreen();

    cout << RED << "********************************************************" << endl;
    cout << "BREAKING NEWS:  MISSION ACCOMPLISHED!" << RESET << endl;
    cout << endl;                                                   
    cout << "The island nation of Malnesia has successfully relocated " << endl;
    cout << "its people after a multi-nation relief campiagn led by " << endl;
    cout << "the UN. Malnesia will soon be uninhabitable due to " << endl;
    cout << "rising sea levels consuming the once popular vacation " << endl;
    cout << "destination. Scientists warned for decades of the " << endl;
    cout << "potential crisis resulting from global climate change." << endl;
    cout << endl;
    cout << "Today's victory is tinged bittersweet by the fact that " << endl;
    cout << "Malnesia is but the first of many nations to face this " << endl;
    cout << "challenge." <<endl;
    cout << RED << "********************************************************" << RESET << endl;
    cout << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cout << "'                                                      '" << endl;
	cout << "'     ...but not everyone made it off the island.      '" << endl;
    cout << "'                                                      '" <<endl;
	cout << "'            1. Play the game                          '" << endl;
	cout << "'            2. Quit                                   '" << endl;
    cout << "'                                                      '" <<endl;
	cout << "'     Please enter 1 or 2 to make your selection:      '" << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	cin >> std::setw(1) >> choice;

	/*Checks that the user makes a valid selection from the menu options
	and prompts them to input a valid selection of 1 or 2 until they
	do. This while loop will check for char/doubles values, integers greater
	than 2 or less than 1. The setw(1) will ensure only the first
	piece of user input is set to choice. */
	while (!cin.good() || cin.peek() != '\n' || choice > 2 || choice < 1)
	{
		cin.clear();
		cin.ignore(256, '\n');
        cout << endl;
        cout << "There's no time to waste! Please make a valid selection:" << endl;
		cout << endl;
		cout << "1. Play the game" << endl;
		cout << "2. Quit" << endl;
        cout << endl;
		cout << "Enter 1 or 2:" << endl;
		cin >> choice;
	}

    /*While loop to check the user's choice. If they select to play, the
    next menu prints for the player to know their mission and select their 
    character and the character is created using a switch statement based on the
    selections of the players. */
	while (choice == 1)
	{
        //Clear the screen and display the menu below
        clearScreen();

        cout << BLUE << "********************************************************" << RESET << endl;
        cout << "MISSION: " << endl;
        cout << endl;
        cout << "Select your character, the last remaining individual on " << endl;
        cout << "the island of Malnesia, and retrieve materials to build" << endl;
        cout << "a raft to flee the island. " << endl;
        cout << endl;
        cout << "You have 120 hours to acquire the necessary materials " << endl;
        cout << "and build your raft. There's no time to waste and the " << endl;
        cout << "island, though beautiful, may not be so kind." << endl;
        cout << BLUE << "********************************************************" << RESET << endl;

        //Variable to hold the character choice of the user
        int characterChoice;
        cout << endl;
        cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	    cout << "'                                                      '" << endl;
	    cout << "'     The last remaining human on Malnesia is:         '" << endl;
        cout << "'                                                      '" <<endl;
	    cout << "'            1. Tourist Tina                           '" << endl;
	    cout << "'            2. Alain Bombard                          '" << endl;
        cout << "'            3. Fyre Fest Phil                         '" << endl;
        cout << "'            4. Mary Robinson                          '" << endl;
        cout << "'                                                      '" <<endl;
	    cout << "'         Please enter your selection:                 '" << endl;
        cout << "'''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
	    cin >> characterChoice;

	    /*Checks that the user makes a valid selection from the menu options
	    and prompts them to input a valid selection of 1 or 2 until they
	    do. This while loop will check for char/doubles values, integers greater
	    than 2 or less than 1. The setw(1) will ensure only the first
	    piece of user input is set to choice. */
	    while (!cin.good() || cin.peek() != '\n' || characterChoice > 4 || characterChoice < 1)
	    {  
		    cin.clear();
		    cin.ignore(256, '\n');
            cout << endl;
            cout << "ERROR: invalid input....no wonder you got left behind!" << endl;
            cout << "Who are you?" << endl;
		    cout << endl;
		    cout << "1. Tourist Tina" << endl;
		    cout << "2. Alain Bombard" << endl;
            cout << "3. Fyre Fest Phil" << endl;
            cout << "4. Mary Robinson" << endl;
            cout << endl;
		    cout << "Please make a valid selection:" << endl;
		    cin >> characterChoice;
	    }

        clearScreen();

        //Switch statement to create a new Character type based off of the user choice
        switch (characterChoice)
        {
            //Creates a new TouristTina character and prints player choice
            case 1:
                player = new TouristTina();
                cout << "You are Tourist Tina and you're stuck alone in Malnesia." << endl;
                cout << "Thankfully though, you have a fully charged iPhoneX." << endl;
                break;

            //Creates a new Barbarian character and prints player choice
            case 2:
                player = new AlainBombard();
                cout << "You are Alain Bombard, renowned French biologist and adventurer." << endl;
                break;
        
            //Creates a new BlueMen character and prints player choice
            case 3:
                player = new FyreFestPhil();
                cout << "You are Fyre Fest Phil, a wannabe influencer who's" << endl; 
                cout << "experiencing some deja vu in Malnesia." << endl;
                break;
        
            //Creates a new Medusa character and prints player choice
            case 4:
                player = new MaryRobinson();
                cout << "You are Mary Robinson, former President of Ireland and former UN High Comissioner." << endl;
                break;
        }
        cout << endl;

        //Prints the characteristics of player's character
        player->printChar();

        cin.ignore(256,'\n');
        //Waits for user to hit enter before clearing screen
		cout << "Hit enter to begin saving yourself from the island..." << endl;
		cin.get();

		clearScreen();

		//Calls gameLoop()function to operate the actions of the game
		gameLoop();

        //Frees dynamically allocated memory for the player before printing menu for new game
        delete player;

        //Empties the backpack of contents added throughout the game
        backpack.clear();

        //Resets time in case user plays again
        time = 0;

        //Resets gameOver/buildRaft/otherEscape in case user plays again
        gameOver = false;
        buildRaft = false;
        otherEscape = false;

        //Waits for user to hit enter before returning to the main menu
        cout << "Hit enter to return to main menu." << endl;
        cin.get();

		return 1;

    }

    /*While loop to check the user's choice. If the user selected to quit
    instead of play, a message will print and the menu will exit in main
    and the program will quit. */
	while (choice == 2)
	{
		cout << "Perhaps you'll be ready next time. Goodbye." << endl;
		return 2;
	}
    return 0;
}

//Function creates the spaces for the game 
void GamePlay::makeMap()
{
    //Creates the different spaces on the game map
    shore = new Shore();
    reef = new Reef();
    base = new Basecamp();
    hatch = new Hatch();
    forest = new Forest();
    peak = new Peak();

    //Sets links to different spaces for the shore
    shore->setTopSpace(reef);
    shore->setBottomSpace(nullptr);
    shore->setRightSpace(base);
    shore->setLeftSpace(nullptr);

    //Sets links to different spaces for the reef
    reef->setTopSpace(nullptr);
    reef->setBottomSpace(shore);
    reef->setRightSpace(nullptr);
    reef->setLeftSpace(nullptr);

    //Sets links to different spaces for the base
    base->setTopSpace(nullptr);
    base->setBottomSpace(nullptr);
    base->setRightSpace(forest);
    base->setLeftSpace(shore);

    //Sets links to different spaces for the hatch
    hatch->setTopSpace(nullptr);
    hatch->setBottomSpace(forest);
    hatch->setRightSpace(nullptr);
    hatch->setLeftSpace(nullptr);

    //Sets links to different spaces for the forest
    forest->setTopSpace(hatch);
    forest->setBottomSpace(nullptr);
    forest->setRightSpace(peak);
    forest->setLeftSpace(base);

    //Sets links to different spaces for the peak
    peak->setTopSpace(nullptr);
    peak->setBottomSpace(nullptr);
    peak->setRightSpace(nullptr);
    peak->setLeftSpace(forest);

}

//Function frees dynamically allocated memory for the map Spaces
void GamePlay::deleteMap()
{
    delete shore;
    delete reef;
    delete base;
    delete hatch;
    delete forest;
    delete peak;
}

//Function prints the entire map of Malnesia
void GamePlay::printMap()
{
    cout << "            MAP OF THE ISLAND NATION OF MALNESIA           " << endl;
    cout << BLUE << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "~~~~~~" << CYAN << "~~~~~~~~~~~~~~~~~~~" << BLUE << "~~~~~~~~~~~~~~~~" << CYAN "~~~~~~~~~" << BLUE "~~~~~~~~~" << endl;
    cout << "~~~~~" << YELLOW << "..." << CYAN << "~~~~~~" << YELLOW << "..................";
    cout << CYAN << "~~~~" << YELLOW << "............." << CYAN << "~~" << YELLOW << "..." << BLUE << "~~~~~" << endl;
    cout << "~~~" << YELLOW << "...." << CYAN << "~~" << YELLOW << "....." << GREEN "****************";
    cout << YELLOW << "............." << GREEN "*****" << YELLOW << "....." << CYAN << "~~~" << BLUE << "~~~" << endl;
    cout << "~~~" << CYAN << "~~" << YELLOW << "...." << GREEN << "**********************";
    cout << YELLOW << "..." << RESET << "[ ]" << BLACKBACK << YELLOW << "...." << GREEN << "**********" << YELLOW << "..." << BLUE << "~~~~~" << endl;
    cout << "~~~" << CYAN << "~" << YELLOW "......" << GREEN << "*****************************************";
    cout << YELLOW << ".." << CYAN << "~~~" << BLUE << "~~~" << endl;
    cout << "~~" << CYAN << "~" << YELLOW << "........." << GREEN << "****************************************";
    cout << YELLOW << "...." << BLUE "~~~" << endl;
    cout << "~~~" << CYAN << "~~" << YELLOW << "......." << GREEN << "*****************************************";
    cout << YELLOW << ".." << BLUE << "~~~~" << endl;
    cout << "~~~~" << CYAN << "~~~" << YELLOW << "....." << GREEN << "*********" << GREY << "____^----^___";
    cout << GREEN << "********************" << YELLOW << ".." << BLUE << "~~~" << endl;
    cout << "~~~~~~~" << CYAN << "~~" << YELLOW << "...." << GREEN << "*******" << GREY << "|             |";
    cout << GREEN << "*******************" << YELLOW << "...." << BLUE << "~" << endl;
    cout << "~~~~~" << CYAN << "~~~" << YELLOW << "....." << GREEN << "*************************************";
    cout << YELLOW << "..." << BLUE << "~~~~~~" << endl;
    cout << "~~~" << CYAN << "~~" << YELLOW << "......." << GREEN << "***********************************";
    cout << YELLOW << ".." << BLUE << "~~~~~~~~~~" << endl;
    cout << "~~~~~~~" << CYAN "~" << YELLOW << "..." << GREEN << "********************";
    cout << YELLOW << "XXXXXXXXX" << GREEN << "*******" << YELLOW<< "..." << BLUE << "~~~~~~~~~" << endl;
    cout << "~~~~~~~" << CYAN << "~~~~" << YELLOW << "...." << GREEN "*************";
    cout << YELLOW << "XXXXXXXXXXXXXX" << GREEN << "******" << YELLOW << "..." << BLUE << "~~~~~~~~" << endl;
    cout << "~~~~~~~" << CYAN << "~~~" << YELLOW << "...." << GREEN "*************";
    cout << YELLOW << "XXXXXXXXXXXXX" << GREY << "^" << YELLOW << "X" << GREEN << "********";
    cout << YELLOW "..." << BLUE << "~~~~~~" << endl;
    cout << "~~~~~" << CYAN << "~~~~" << YELLOW << "....." << GREEN << "****************" << YELLOW << "XXXXXXXXX";
    cout << GREY << "^^^" << YELLOW << "XX" << GREEN << "******" << YELLOW << "..." << BLUE << "~~~~~~" << endl;
    cout << "~~~~~~~" << CYAN << "~~" << YELLOW << "......" << GREEN << "****************";
    cout << YELLOW << "XXXXXXX" << GREY "^^^^^" << YELLOW << "X" << GREEN "**********" << YELLOW << ".." << BLUE << "~~~" << endl;
    cout << "~~~~~~~~~~" << CYAN << "~~~~" << YELLOW << "..." << GREEN << "*************" << YELLOW << "XXXXXXX";
    cout << GREY << "^^^^^^^" << YELLOW << "X" << GREEN << "*********" << YELLOW << "..." << BLUE << "~~" << endl;
    cout << "~~~~~" << CYAN "~~~~~~~~~~" << YELLOW << ".." << GREEN << "*************" << YELLOW << "XXXXXX";
    cout << GREY << "^^^^^^^^^" << YELLOW << "X" << GREEN << "*******" << YELLOW << "..." << BLUE << "~~~" << endl;
    cout << "~~" << CYAN << "~~~~" << YELLOW << "..." << CYAN << "~~~~~~~" << YELLOW << "..";
    cout << GREEN << "***********************************" << YELLOW "..." << CYAN << "~~~" << endl;
    cout << "~~" << YELLOW << "........." << CYAN << "~~~~~~~" << YELLOW << "..." << GREEN << "******************************";
    cout << YELLOW << "..." << CYAN << "~~~~~" << endl;
    cout << "~~~" << YELLOW << ".........." << CYAN << "~~~~~" << YELLOW << "......" << GREEN << "*****************************";
    cout << YELLOW << "..." << BLUE << "~~~" << endl;
    cout << "~~" << CYAN << "~~" << YELLOW << "........." << CYAN << "~~~~~~~~~" << YELLOW << "...";
    cout << GREEN << "*************************" << YELLOW << "...." << CYAN "~~~~~" << endl;
    cout << "~~~~~" << YELLOW << "......." << CYAN << "~~~" << YELLOW << "....." << CYAN << "~~~";
    cout << YELLOW << "..." << GREEN << "**************************" << YELLOW << "..." << BLUE << "~~~~" << endl;
    cout << "~~~" << YELLOW << "...................." << GREEN << "*************************" << YELLOW << "......" << BLUE << "~~~~~" << endl;
    cout << "~~~~" << YELLOW << "............" << GREEN << "*************************" << YELLOW << "...." << CYAN << "~~~~~~~" << BLUE "~~~~~~~" << endl;
    cout << "~~~~" << CYAN << "~~" << YELLOW << "............." << GREEN << "************" << YELLOW << "....";
    cout << CYAN << "~~~~~~~~" << BLUE << "~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~" << CYAN << "~~~~" << YELLOW << "............" << GREEN "******";
    cout << YELLOW << "...." << CYAN << "~~~~~~~~~~~" << BLUE << "~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~" << CYAN << "~~~~~~~" << YELLOW << "............" << CYAN "~~~~~~~~~~~~" << BLUE << "~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~" << CYAN << "~~~~~~~~~~~~~~~~~~~~~~~~~" << BLUE << "~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET << endl;

}

//Function prints tombstone to the screen
void GamePlay::printTombstone()
{
    cout << endl;
    cout << GREY << "                 _______  " << endl;
    cout << "           _____/      ll_____ " << endl;
    cout << "          |  _     ___   _   || " << endl;
    cout << "          | | l     |   | l  || " << endl;
    cout << "          | |  |    |   |  | || " << endl;   
    cout << "          | |_/     |   |_/  ||  " << endl;
    cout << "          | | l     |   |    ||  " << endl;
    cout << "          | |  l    |   |    ||  " << endl;
    cout << "          | |   l. _|_. | .  || " << endl;
    cout << "          |                  || " << endl;
    cout << "          |                  || " << endl;
    cout << "          |                  || " << endl;
    cout << "          |__________________|'   " << RESET << endl;

    setgameOver(true);

    cin.ignore(256, '\n');
    //Waits for user to hit enter before returning to main menu
    cout << "Hit enter when you're ready." << endl;
    cin.get(); 
}

//Function for controlling the flow of the game
void GamePlay::gameLoop()
{
    clearScreen();

    //Call makeMap function to create the map for the game
    makeMap();

    //Call printMap function to print the map to the screen
    printMap();

    //Calculates remaining game time for player and prints update to screen
        int remainingTime = 120 - time;
        cout << endl;
        cout << BLUE << "____________________________ TIME UPDATE ____________________________" << RESET << endl;
        cout << endl;
        cout << "You have " << remainingTime << " hours remaining on the island and it will take " << endl;
        cout << player->getType() << " " << player->getRaftMaking(); 
        cout << " hours of that time to build a raft." << endl;
        cout << "There's no time to waste. You must get off the island!" << endl;
        cout << endl;
        cout << BLUE << "_____________________________________________________________________" << RESET << endl;
        cout << endl;

        cout << "Hit enter to continue." << endl;
        cin.get();

    //Sets the currentSpace to the shore for the start of the game
    currentSpace = shore;
    
    while (!gameOver)
    {
        clearScreen();

        //Prints the map of the current space
        currentSpace->printSpace();

        //Variable to hold the item to be added to the backpack
        std::string addItem = currentSpace->getItem();
        
        cout << "Take a look around, maybe you'll find something." << endl;
        cout << endl;
        cout << endl;
        cout << "Hit enter to continue." << endl;
        cin.get();

        //Function adds the item from the space to the player's backpack
        collectItem(addItem);

        //Updates the visitCounter so that repeat items will not be added
        currentSpace->setVisitCounter(1);

        //Prints the content of the player's backpack
        printBackpack();

        cout << "What's there to do here?" << endl;
        cout << endl;
        cout << "Hit enter to see what " << player->getType() << " does at the " << currentSpace->getSpaceName() << "." << endl;
        cin.get();

        cout << endl;
        cout << CYAN << "//////////////////////////////////////////////////////////////////////////////////" << RESET << endl;
        cout << endl;

        //Calls for a random event to occur in the space and holds the return value in variable
        int passedTime = currentSpace->randomEvent();

        //Updates time passed from randomEvent occuring in the Space
        time += passedTime;

        //Checks if user died from random event (passedTime will equal 120 if that's the case)
        if (passedTime == 120)
        {
            //Calls function to print tombstone to the screen
            printTombstone();
            gameOver = true;

        }
        //Checks if user has ran out of time
        else if (player->getTimeLimit() < time)
        {
            //Informs user that they have ran out of time to build a raft
            cout << "You no longer have enough time to build your raft to flee the island." << endl;
            cout << "All hope is lost for you, " << player->getType() << "." << endl;
            cout << "May you rest in peace." << endl;
            cout << endl;

            //Calls function to print tombstone to the screen
            printTombstone();
            gameOver = true;
        }
        else
        {
            //Calculates remaining game time
            remainingTime = 120 - time;
            cout << endl;
            cout << BLUE << "____________________________ TIME UPDATE ____________________________" << RESET << endl;
            cout << "You have " << remainingTime << " hours remaining on the island and it" << endl;
            cout << "will take " << player->getType() << " " << player->getRaftMaking(); 
            cout << " hours of that time to build a raft." << endl;
            cout << "There's no time to waste. You must get off the island!" << endl;
            cout << BLUE << "_____________________________________________________________________" << RESET << endl;
            cout << endl;
            cout << endl;
            cout << "There's so much to explore on this island. Should you waste some time?" << endl;
            cout << endl;
            cout << "Hit enter to see what your character decides to do." << endl;
            cin.get();

            clearScreen();

            /*Calls the player's wasteTime function which will determine if/how much time the character
            wastes doing something that doesn't help their survival. */
            int wastedTime = player->wasteTime();

            //Updates time passed from particular Character type wasting time in their own way
            time +=wastedTime;

            //Checks if user died from random event (passedTime will equal 120 if that's the case)
            if (passedTime == 120)
            {
                //Calls function to print tombstone to the screen
                printTombstone();
                gameOver = true;

            }
            //Checks if user has ran out of time
            else if (player->getTimeLimit() < time)
            {
                //Informs user that they have ran out of time to build a raft
                cout << "You no longer have enough time to build your raft to flee the island." << endl;
                cout << "All hope is lost for you, " << player->getType() << "." << endl;
                cout << "May you rest in peace." << endl;
                cout << endl;

                //Calls function to print tombstone to the screen
                printTombstone();
                gameOver = true;
            }
            else
            {

                //Prints the menu for the currentSpace for the user to decide what to do next
                move = currentSpace->moveMenu();

                cout << endl;

                /*If statements are used to check which switch statement to use for the
                user's choice of action from the moveMenu().*/
                if (currentSpace == shore)
                {
                    //Switch statement to move character based off of the player choice
                    switch (move)
                    {
                        //Moves character to the reef and updates time
                        case 1:
                        {
                            currentSpace = reef;
                            time += 2;
                            break;
                        } 
                        //Moves character to basecamp and updates time
                        case 2:
                        {    
                            currentSpace = base;
                            time += 1;
                            break;
                        }
                        /*Prompts user for how long they want to remain at the shore, check for valid input,
                        update time accordingly. */
                        case 3:
                        {
                            int remainShore;
                            cout << "How long would you like to stay at the shore?" << endl;
                            cout << "Enter a number of hours between 1 - 24: " << endl;
                            cin >> remainShore;

                            /*Checks that the user makes a valid selection from the menu options
	                        and prompts them to input a valid selection of 1-24 until they
	                        do. This while loop will check for char/doubles values, integers greater
	                        than 24 or less than 1. */
	                        while (!cin.good() || cin.peek() != '\n' || remainShore > 24 || remainShore < 1)
	                        {
		                        cin.clear();
		                        cin.ignore(256, '\n');
                                cout << endl;
                                cout << "ERROR: invalid input." << endl;
                                cout << "You really shouldn't be wasting time." << endl;
		                        cout << endl;
		                        cout << "Enter a number of hours between 1-24 to spend on the shore:" << endl;
		                        cin >> remainShore;
	                        }
                            time += remainShore;
                            break;
                        }
                        //Checks if user has necessary materials to build a raft and allows them to win if they do
                        case 4:
                        {
                            readyBuild();
                            break;
                        }
                    }
                }
                /*If statements are used to check which switch statement to use for the
                user's choice of action from the moveMenu().*/
                else if (currentSpace == reef)
                {
                    //Switch statement to move character based off of the player choice
                    switch (move)
                    {
                        //Moves character to the shore and updates time
                        case 1:
                        {    
                            currentSpace = shore;
                            time += 2;
                            break;
                        }
                        //Waste time catching fish
                        case 2:
                        {
                            int numFish = rand() % 11 + 0;
                            int fishingHours = rand() % 7 + 2;
                            cout << "You caught " << numFish << " fish in " << fishingHours << " hours." << endl;
                            time += fishingHours;
                            break;
                        }
                        //Waste time collecting bleached cora
                        case 3: 
                        {    
                            int coralHours = rand() % 7 + 2;
                            cout << "You spent " << coralHours << " hours collecting bleached coral." << endl;
                            cout << "What's your plan?! Don't you want to live?" << endl;
                            time += coralHours;
                            break;
                        }
                        //Checks if user has necessary materials to build a raft and allows them to win if they do
                        case 4:
                        {
                            readyBuild();
                            break;
                        }
                    }
                }
                /*If statements are used to check which switch statement to use for the
                user's choice of action from the moveMenu().*/
                else if (currentSpace == base)
                {
                    //Switch statement to move character based off of the player choice
                    switch (move)
                    {
                        //Moves character to the shore and updates time
                        case 1:
                        {    
                            currentSpace = shore;
                            time += 1;
                            break;
                        }
                        //Moves character to the forest and updates time
                        case 2:
                        {    
                            currentSpace = forest;
                            time += 1;
                            break;
                        }
                        //Prompts user for how long they want to relax at the basecamp
                        case 3:
                        {
                            int remainBase;
                            cout << "How long would you like to stay at the basecamp shelter?" << endl;
                            cout << "Enter a number of hours between 1 - 24: " << endl;
                            cin >> remainBase;

                            /*Checks that the user makes a valid selection from the menu options
	                        and prompts them to input a valid selection of 1-24 until they
	                        do. This while loop will check for char/doubles values, integers greater
	                        than 24 or less than 1. */
	                        while (!cin.good() || cin.peek() != '\n' || remainBase > 24 || remainBase < 1)
	                        {
		                        cin.clear();
		                        cin.ignore(256, '\n');
                                cout << endl;
                                cout << "ERROR: invalid input." << endl;
                                cout << "You really shouldn't be wasting time." << endl;
		                        cout << endl;
		                        cout << "Enter a number of hours between 1-24 to spend on the shore:" << endl;
		                        cin >> remainBase;
	                        }
                            time += remainBase;
                            break;
                        }
                        //Checks if user has necessary materials to build a raft
                        case 4:
                        {    
                            readyBuild();
                            break;
                        }
                    }
                }
                /*If statements are used to check which switch statement to use for the
                user's choice of action from the moveMenu().*/
                else if (currentSpace == forest)
                {
                    //Switch statement to move character based off of the player choice
                    switch (move)
                    {
                        //Moves character to the hatch and updates time
                        case 1:
                        {
                            currentSpace = hatch;
                            time += 1;
                            break;
                        }
                        //Moves character to basecamp and updates time
                        case 2:
                        {
                            currentSpace = base;
                            time += 1;
                            break;
                        }
                        //Moves character to the peak and updates time
                        case 3:
                        {
                            currentSpace = peak;
                            time += 4;
                            break;
                        }
                        //Prompts user for how long they want to explore the forest
                        case 4:
                        {
                            int explore;
                            cout << "How long would you like to explore the forest?" << endl;
                            cout << "Enter a number of hours between 1 - 6: " << endl;
                            cin >> explore;

                            /*Checks that the user makes a valid selection from the menu options
	                        and prompts them to input a valid selection of 1-6 until they
	                        do. This while loop will check for char/doubles values, integers greater
	                        than 6 or less than 1. */
	                        while (!cin.good() || cin.peek() != '\n' || explore > 6 || explore < 1)
	                        {
		                        cin.clear();
		                        cin.ignore(256, '\n');
                                cout << endl;
                                cout << "ERROR: invalid input." << endl;
                                cout << "You really shouldn't be wasting time walking around the woods." << endl;
                                cout << "Also, it's dark and full of terrors." << endl;
		                        cout << endl;
		                        cout << "Enter a number of hours between 1-6 to spend roaming the woods:" << endl;
		                        cin >> explore;
	                        }
                            time += explore;
                            break;
                        }
                    }
                }
                /*If statements are used to check which switch statement to use for the
                user's choice of action from the moveMenu().*/
                else if (currentSpace == hatch)
                {
                    //Switch statement to move character based off of the player choice
                    switch (move)
                    {
                        //Moves character to the forest and updates time
                        case 1:
                        {
                            currentSpace = forest;
                            time += 1;
                            break;
                        }    
                        //Character dies of botulism
                        case 2:
                        {
                            cout << "What were you thinking? The canned meat and vegetables were definitely" << endl;
                            cout << "sketchy. This was a poor choice indeed." << endl;
                            cout << "You died of botulism." << endl;
                            time = 120;
                            break;
                        }

                        //Prompts user for how long they want to read in the hatch
                        case 3:
                        {    
                            int read;
                            cout << "How long would you like to read in the hatch?" << endl;
                            cout << "Enter a number of hours between 1 - 4: " << endl;
                            cin >> read;

                            /*Checks that the user makes a valid selection from the menu options
	                        and prompts them to input a valid selection of 1-4 until they
	                        do. This while loop will check for char/doubles values, integers greater
	                        than 4 or less than 1. */
	                        while (!cin.good() || cin.peek() != '\n' || read > 4 || read < 1)
	                        {
		                        cin.clear();
		                        cin.ignore(256, '\n');
                                cout << endl;
                                cout << "ERROR: invalid input." << endl;
                                cout << "You really shouldn't be wasting time idly reading." << endl;
                                cout << "Don't you realize you're going to die soon?!" << endl;
		                        cout << endl;
		                        cout << "Enter a number of hours between 1-4 to spend reading in the hatch:" << endl;
		                        cin >> read;
	                        }
                            time += read;
                            break;
                        }
                        //User takes a nap for a random amount of time
                        case 4:
                        {
                            int nap = rand() % 7 + 2;
                            cout << "You took a nap for " << nap << " hours." << endl;
                            time += nap;
                            break;
                        }
                    }
                } 
                /*If statements are used to check which switch statement to use for the
                user's choice of action from the moveMenu().*/
                else if (currentSpace == peak)
                {
                    //Switch statement to move character based off of the player choice
                    switch (move)
                    {
                        //Moves character to a the forest
                        case 1:
                        {
                            currentSpace = forest;
                            time += 3;
                            break;
                        }
                        //Character uses time watching the sunset
                        case 2:
                        {
                            int sunset = rand() % 7 + 2;
                            cout << "You sat for " << sunset << " hours waiting for the sunset." << endl;
                            time += sunset;
                            break;
                        }
                        //Character uses time sleeping
                        case 3:
                        {
                            int sleep = rand() % 7 + 2;
                            cout << "You fell asleep for " << sleep << " hours." << endl;
                            time += sleep;
                            break;
                        }
                        //Player checks for cell service
                        case 4:
                        {   
                            if (player->getType() == "Tourist Tina")
                            {
                                cout << "God bless technology! There's service at the peak!" << endl;
                                cout << "You successfully posted an Instagram story about your predicament" << endl;
                                cout << "and your followers united to organize a rescue mission. " << endl;
                                cout << "Social media saved your life, literally." << endl;
                            
                                //Sets otherEscape to true to allow Tina for the Victory() function to be called for Tina
                                otherEscape = true;

                                cin.ignore(256, '\n');
                                cout << "Hit enter to continue." << endl;
                                cin.get();
                            }
                            else if (player->getType() == "Alain Bombard")
                            {
                                cout << "Check cell service? What for and how?! Alain Bombard has no time" << endl;
                                cout << "for such trivial devices." << endl;
                            }
                            else if (player->getType() == "Fyre Fest Phil")
                            {
                                cout << "Phil shares his video recordings on Instagram to inform the world" << endl;
                                cout << "of the dangers of purchasing tickets for events offered by Billy McFarland." << endl;
                                cout << "His videos go viral, but unfortunately no one takes charge to rescue him" << endl;
                                cout << "from Malnesia." << endl;   
                            }
                            else if (player->getType() == "Mary Robinson")
                            {
                                cout << "Mary's cell phone went dead from receiving frequent notifications from her " << endl;
                                cout << "news apps and email." << endl;
                            }
                            break;
                        }
                    }
                }

                //If otherEscape == true, TouristTina made it to the peak, got cell reception and won the game
                if (otherEscape == true)
                {
                    //Print victory phone in victory function
                    victory();
                    gameOver = true;
                }
                //Else if buildRaft == true, the player gathered necessary materials and has enough time to build raft
                else if(buildRaft == true)
                {
                    //Print victory message and leave island
                    victory();
                    gameOver = true;

                }
                //Else if time == 120, the character died from a random or user selected event
                else if (time == 120)
                {
                    //Calls function to print tombstone to the screen
                    printTombstone();
                    gameOver = true;
                }
                //Else if player's timeLimt is less than time, the player doesn't have enough time to make their raft and they die
                else if (player->getTimeLimit() < time)
                {
                    //Informs user that they have ran out of time to build a raft
                    cout << "^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^^v^v^v^v^v^^v^v^v^v^v^^v^v^v^v^v^^v^v^v^v^v^" << endl;
                    cout << endl;
                    cout << "You no longer have enough time to build your raft to flee the island." << endl;
                    cout << "All hope is lost for you, " << player->getType() << "." << endl;
                    cout << "May you rest in peace." << endl;
                    cout << endl;

                    //Calls function to print tombstone to the screen
                    printTombstone();
                    gameOver = true;
                }
                //Else, loop continues
                else
                {
                    //Calculates remaining game time
                    remainingTime = 120 - time;
                    cout << BLUE << "____________________________ TIME UPDATE ____________________________" << RESET << endl;
                    cout << "You have " << remainingTime << " hours remaining on the island and it" << endl;
                    cout << "will take " << player->getType() << " " << player->getRaftMaking(); 
                    cout << " hours of that time to build a raft." << endl;
                    cout << "There's no time to waste. You must get off the island!" << endl;
                    cout << BLUE << "_____________________________________________________________________" << RESET << endl;
                    cout << endl;

                    cin.ignore(256, '\n');
                    //Waits for user to hit enter before returning to main menu
                    cout << "Hit enter to continue." << endl;
                    cin.get();    
                }
            }  
        }  
    }

    //Frees dynamically allocated memory for Spaces before reprinting the menu for a new game
    deleteMap();
}

//Function adds the item from a Space to backpack container for player
void GamePlay::collectItem(std::string addItemIn)
{
    //Checks if the player has been to Space before and if not, adds item to backpack
    if (currentSpace->getVisitCounter() == 0)
    {   
        backpack.push_back(addItemIn);

        cout << "You've acquired: " << addItemIn << endl;
        cout << endl;
        cout << addItemIn << " is being added to your backpack." << endl;
    }
    //If user has been to space, nothing is added to backpack and following message is printed
    else
    {
        cout << "You've already acquired " << addItemIn << " from " << currentSpace->getSpaceName() << "." << endl;
        cout << endl;
        cout << "Nothing else is being added to your backpack." << endl;
    }
    cout << endl;      
}

//Function prints the contents of the backpack for the player
void GamePlay::printBackpack()
{
    cout << MAGENTA << "     .eec.            .e$$$c    " << endl;                            
    cout << "   z$*'*$eec..       zP  .3$c    " << endl;               
    cout << "  .$'  d$'  ''****bee*=*'' *$     " << endl;                          
    cout << "  $&  d$$                   ^$&    " << endl;                          
    cout << " .$  z$&$bc.                 $&    " << endl;                          
    cout << " 4F 4$' $'^$*ec..  .ee.    ./' b    " << endl;                         
    cout << " dF $P  P  F   '''''3F'''''    4    " << endl;                         
    cout << " 3b4$   '           $F         4    " << endl;                         
    cout << " 4$$$  -            $F         4    " << endl;                         
    cout << "  $$$               $F         4    " << endl;                         
    cout << "  *$$               $F         @     " << endl;                        
    cout << "  4$$               $F         F     " << endl;                        
    cout << "  ^$F   .......     $F        .F     " << endl;                        
    cout << "   $'  z'     ^'''''$F'''''''''&.    " << endl;                        
    cout << "  4$  4F     e      $L          '.   " << endl;                        
    cout << "  4F  ^L    4$     z&'c    *.    b   " << endl;                        
    cout << "  d    ^$*=e$$eer=$'  'be..JL..ee*    " << endl;                       
    cout << "  $     $   $F    $   zP   4P   F    " << endl;                        
    cout << "  F     F   $F    4. .P    d&  J     " << endl;                        
    cout << " 4&     F   $F     F $'   zP   P     " << endl;                        
    cout << " J      F   '&     Fd'   4P   4'     " << endl;                        
    cout << " $      F          $F         P      " << endl;                        
    cout << " $      L         .$         4&       " << endl;                       
    cout << " *      '.       .$$.       .$       " << endl;                        
    cout << " '       ^'****'''  '*******$'       " << endl;                        
    cout << "  &                        .P        " << endl;                        
    cout << "   *c                     .@         " << endl;                        
    cout << "    ^'&4c...        ...zed*          " << endl;                 
    cout << "           ^''''''''^                " << RESET << endl;
    cout << endl;
    cout << "The contents of your backpack: " << endl;

    for (int i = 0; i < backpack.size(); i++)
    {
        cout << "* " << backpack.at(i) << endl;
    }
    cout << endl;
    cout << endl;
}

//Function checks if the player has materials necessary to build the raft
void GamePlay::readyBuild()
{
    bool toolbox, ax, timber, rope = false;

    /*If statements check if the user has visited the spaces with necessary materials, if so,
    the user has the materials to make a raft. */
    if (base->getVisitCounter() > 0)
    {
        cout << "You have a toolbox." << endl;
        toolbox = true;
    }
    if (peak->getVisitCounter() > 0)
    {
        cout << "You have an ax." << endl;
        ax = true;
    }
    if (forest->getVisitCounter() > 0)
    {
        cout << "You have timber." << endl;
        timber = true;
    }
    if (reef->getVisitCounter() > 0)
    {
        cout << "You have rope." << endl;
        rope = true;
    }
    
    if (toolbox == true && ax == true && timber == true && rope == true)
    {
        cout << endl;
        if (player->getTimeLimit() > time)
        {   
            setBuildRaft(true);

            cout << endl;
            cout << "You've acquired all of the necessary materials in time to build your raft." << endl;
            cout << endl;
        }   
    }
    else
    {
        cout << endl;
        cout << "You cannot make a raft yet. Continue searching for materials before your time runs out." << endl;
    }

    cin.ignore(256, '\n');
    cout << "Hit enter to continue." << endl;
    cin.get(); 
}

//Function prints out notice of victory for winning the game
void GamePlay::victory()
{
    //Prints out success due to building a raft
    if (getBuildRaft() == true)
    {
        clearScreen();
        cout << "It took you " << time << " hours to gather materials to build a raft." << endl;
        cout << "After building your raft for " << player->getRaftMaking() << " hours, your craft is ready to set sail." << endl;
        cout << endl;
        cout << "Hit enter to sail away." << endl;
        cin.get();

        cout << "               . . .                  " << endl;
        cout << "             ,      ` ` ---. ___. .-._    " << endl;
        cout << "                          `      ,   , ` -_.  " << endl;
        cout << "             .   .      ,  ,    a.aaaaa.__a8  " << endl;
        cout << "             , .   ,   ...--,a8P"  "Y888888a  " << endl;
        cout << "              ,   .a8a'/    `  l_       _ 8|  " << endl;
        cout << "                .a88P    .       l -' .a8|/   " << endl;
        cout << "                   l  / Y         ,a8   _/  _____ " << endl;
        cout << "              l__   `X   l  ___/  `Y8  a8l      ---__________ " << endl;
        cout << "                 l_       l        a l/  |   _________       __________   " << endl;
        cout << "                  a  ._  _/_      a8a   /;                      _____ " << endl;
        cout << "               __/P8    l  '8a. ./Y'8-__a:.                           " << endl;
        cout << "                   /8a  Y8a    8P_  _  a8.:       _______            _______  " << endl;
        cout << "             --., / `878/88a._./Ü:l____a;; .                    ___               " << endl;
        cout << "                a__   l:::.::.::.::.;;'.''           __________               ____    " << endl;
        cout << "              a.   /:.:. . .                 ______                                   " << endl;
        cout << "               l_ /::. ,         _______                         _________________    " << endl;
        cout << "             l.   /.                                   O                              " << endl;
        cout << "              l:_/.  .  ________    ___      .________( l_______.        ______       " << endl;
        cout << "               l:.                  ______     :__::__::__::__:     ___               " << endl;
        cout << "                /. .       ___                                                        " << endl;
        cout << "              ----_                               ____________               ___      " << endl;
        cout << "               /   /                       ___                                        " << endl;
        cout << "                <     l -.        ____                      ______                     " << endl;
        cout << "             __/ Y     a`   l `            _______                       __________    " << endl;
        cout << "                         , '     `   `                `     `   .====_               " << endl;
        cout << "             -  _     ` (       `  `  `   `       `     _`    _/      l------.        " << endl;  
        cout << "                 - .     .  `     `    `    `      _--/  l__/      x                 " << endl; 
        cout << "                      -. .          `          _---l                   ,              " << endl;
        cout << "             l__    __          _.       ` ___/                 l /                   " << endl;
        cout << "                l__/  l    ___,/  l_______/             l,                            " << endl;
        cout << "                       l__/                                                           " << endl;
        cout << endl;
        cout << "You've successfully escaped from the deserted island nation of Malnesia!" << endl;
    }
    //Print outs success due to Instagram followers
    else
    {
        clearScreen();
        cout << "It took you " << time << " hours to find a way off the island." << endl;
        cout << player->getType() << " is so thankful for her dedicated followers" << endl;
        cout << "and, obviously, for her phone." << endl;
        cout << endl;
        cout << player->getType() << " has successfully escaped doom in Malnesia." << endl;
        cout << endl;
        cout << endl;
        cout << "                _.._           " << endl;
        cout << "         __.--"" __ ""--.__    " << endl;
        cout << "        .'//   .-"  "-.   ll`,  " << endl;
        cout << "      : :'  .'.  :;  ,`.  `; ; " << endl;
        cout << "    /; ;  /   T. $$ ,P  l  : :   " << endl;
        cout << "   /: :  ;    T.:;,P    :  ; ; " << endl;
        cout << "   )| | :      `  '      ; | | " << endl;
        cout << "   `j | :.--------------.: | | " << endl;
        cout << "    ; ; |                | : : " << endl;
        cout << "    ; ; |                | : : " << endl;
        cout << "    | | |                | | | " << endl;
        cout << "    | | |                | | | " << endl;
        cout << "    : : |                | ; ; " << endl;
        cout << "    : : :________________: ; ; " << endl;
        cout << "    ; ;__    _...._    __: :   " << endl;
        cout << "     | ;  '-./ ,--, l,-'  : |  " << endl;
        cout << "     | '._   l ;  : /   _.' |  " << endl;
        cout << "     :  __`-. `."",' .-'__  ;  " << endl;
        cout << "      ;`.__> `.J__L.' <__.':   " << endl;
        cout << "      ;.--._   .--.   _.--,:   " << endl;
        cout << "      |`.__.' `.__.' `.__.'|   " << endl;
        cout << "      |.--._   .--.   _.--,|   " << endl;
        cout << "      |`.__.' `.__.' `.__.'|   " << endl;
        cout << "      |.--._   .--.   _.--,|   " << endl;
        cout << "      ;`.__.' `.__.' `.__.':   " << endl;
        cout << "     : .--._   .--.   _.--, ;  " << endl;
        cout << "     ; `.__.' `.__.' `.__.' :  " << endl;
        cout << "     ;                      :  " << endl;
        cout << "     '--..__          __..--'  " << endl;
        cout << "            """"""""""         " << endl;

    }   
}

//Function prints 100 newlines to clear the visible screen
void GamePlay::clearScreen()
{
	std::cout << std::string(100, '\n');
    cout << endl;
}

//Destructor declared but left undefined
GamePlay::~GamePlay()
{

}