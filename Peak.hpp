/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the Peak class, an 
**                  inherited class of the Space class. Peak.hpp
**                  declares the virtual functions for a Peak Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef PEAK_HPP
#define PEAK_HPP

#include "Space.hpp"

class Peak : public Space
{
    private:

    public:
        Peak(); //Constructor
        int randomEvent(); //Virtual function for calling a random event 
        int moveMenu();    //Virtual function for printing the move menu for user
        void printSpace();  //Virtual function for printing the space for the user
        ~Peak();   //Destructor
};

#endif