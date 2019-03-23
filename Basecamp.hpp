/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the  class, an 
**                  inherited class of the Space class. Basecamp.hpp
**                  declares the virtual functions for a Basecamp Space.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef BASECAMP_HPP
#define BASECAMP_HPP

#include "Space.hpp"

class Basecamp : public Space
{
    private:

    public:
        Basecamp(); //Constructor
        int randomEvent(); //Virtual function for calling a random event 
        int moveMenu();    //Virtual function for printing the move menu for user
        void printSpace();  //Virtual function for printing the space for the user
        ~Basecamp();   //Destructor
};

#endif