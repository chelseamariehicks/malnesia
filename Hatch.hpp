/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the Hatch class, an 
**                  inherited class of the Space class. Hatch.hpp
**                  declares the virtual functions for a Hatch Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef HATCH_HPP
#define HATCH_HPP

#include "Space.hpp"

class Hatch : public Space
{
    private:

    public:
        Hatch(); //Constructor
        int randomEvent(); //Virtual function for calling a random event 
        int moveMenu();    //Virtual function for printing the move menu for user
        void printSpace();  //Virtual function for printing the space for the user
        ~Hatch();   //Destructor
};

#endif