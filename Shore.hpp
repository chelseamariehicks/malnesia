/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the Shore class, an 
**                  inherited class of the Space class. Shore.hpp
**                  declares the virtual functions for a Shore Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef SHORE_HPP
#define SHORE_HPP

#include "Space.hpp"

class Shore : public Space
{
    private:

    public:
        Shore(); //Constructor
        int randomEvent(); //Virtual function for calling a random event 
        int moveMenu();    //Virtual function for printing the move menu for user
        void printSpace();  //Virtual function for printing the space for the user
        ~Shore();   //Destructor
};

#endif