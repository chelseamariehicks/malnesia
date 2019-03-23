/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the Forest class, an 
**                  inherited class of the Space class. Forest.hpp
**                  declares the virtual functions for a Forest Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef FOREST_HPP
#define FOREST_HPP

#include "Space.hpp"

class Forest : public Space
{
    private:

    public:
        Forest(); //Constructor
        int randomEvent(); //Virtual function for calling a random event 
        int moveMenu();    //Virtual function for printing the move menu for user
        void printSpace();  //Virtual function for printing the space for the user
        ~Forest();   //Destructor
};

#endif