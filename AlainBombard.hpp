/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the AlainBombard class, an 
**                  inherited class of the Characters class. AlainBombard.hpp
**                  declares the virtual functions for an Dr. Bombard Character's
**                  decision making and plankton eating, and a function
**                  for printing the characteristics of a AlainBombard.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef ALAINBOMBARD_HPP
#define ALAINBOMBARD_HPP

#include "Characters.hpp"

class AlainBombard : public Characters
{
    private:

    public:
        AlainBombard(); //Default Constructor
        void printChar(); //Function prints the characteristics of a Dr. Bombard type
        int decisionMaking(); //Function for Dr. Bombard's decision in some situations
        int wasteTime(); //Function for Character to waste time eating plankton
        ~AlainBombard(); //Destructor
};

#endif