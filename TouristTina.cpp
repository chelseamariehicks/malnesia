/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The implementation file for the TouristTina class defines
**                  the constructor for a TouristTina character, setting
**                  the character's type, time needed for raft making, and 
**                  time limit for completing the task as well as 
**                  the functions for printing Tina's characteristics,
**                  a function for decision making, and a function for 
**                  determining how much time she wastes taking selfies.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "TouristTina.hpp"

using std::cout;
using std::cin;
using std::endl;

/*Default Constructor - sets required time for raft making to 120, she needs to acquire items
for raft making in 120 hours or face death. */
TouristTina::TouristTina()
{
    this->type = "Tourist Tina";
    this->raftMaking = 60;
    this->timeLimit = 60;
}

//Function prints the characteristics of a Tina type
void TouristTina::printChar()
{
    cout << "....................................................." << endl;
    cout << "Tourist Tina found an incredibly inexpensive flight" << endl;
    cout << "for her dream vacation to Malnesia. She loves eating " << endl; 
    cout << "exotic foods and sharing her story on Instagram. " << endl;
    cout << "Currently she's taking time off from teaching English " << endl;
    cout << "overseas to get her yoga instructor certification. " << endl;
    cout << endl;
    cout << "Tina isn't afraid to try new things and loves an " << endl;
    cout << "adventure....so long as she can document it for her " << endl;
    cout << "followers." << endl;
    cout << "....................................................." << endl;
    cout << endl;
    cout << endl;
}

/*Function returns an random integer from a deterined range of 70-100 that represents a 
percent chance for Tina to make a poor decision. This value will be compared to a set value 
in some randomEvents that occur in different spaces. */
int TouristTina::decisionMaking()
{
    //Variable to hold the percent chance of Tina making a poor decision
    int poorDecisionChance;

    poorDecisionChance = rand() % 31 + 70;

    return poorDecisionChance;  
}

//Function for Character to waste time
int TouristTina::wasteTime()
{
    int timeWasted;

    //Variable to hold the percent chance of Tina making a poor decision
    int poorDecisionChance = decisionMaking();

    /*If the random number generated by decisionMaking is greater than 75, then
    Tina makes a decision that doesn't help her survival. */
    if (poorDecisionChance > 75)
    {
        cout << "You couldn't resist taking some selfies." << endl;
        cout << "You had no idea you wasted two hours! Oops!" << endl;
        timeWasted = 2;
    }
    else
    {
        cout << "You're not wasting any time." << endl;
        cout << "You are focused on getting off of this island!" << endl;
        timeWasted = 0;
    }
    
    return timeWasted; 
}

//Destructor
TouristTina::~TouristTina()
{

}