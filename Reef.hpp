/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the Reef class, an 
**                  inherited class of the Space class. Reef.hpp
**                  declares the virtual functions for a Reef Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef REEF_HPP
#define REEF_HPP

#include "Space.hpp"

class Reef: public Space
{
    private:

    public:
        Reef(); //Constructor
        int randomEvent(); //Virtual function for calling a random event 
        int moveMenu();    //Virtual function for printing the move menu for user
        void printSpace();  //Virtual function for printing the space for the user
        ~Reef();   //Destructor
};

#endif