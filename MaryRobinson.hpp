/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the MaryRobinson class, an 
**                  inherited class of the Characters class. MaryRobinson.hpp
**                  declares the virtual functions for a Mary Character's
**                  decision making and a function for printing the
**                  characteristics of a MaryRobinson.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef MARYROBINSON_HPP
#define MARYROBINSON_HPP

#include "Characters.hpp"

class MaryRobinson : public Characters
{
    private:

    public:
        MaryRobinson(); //Default Constructor
        void printChar(); //Function prints the characteristics of a Mary type
        int decisionMaking(); //Function for Mary's decision in some situations
        int wasteTime(); //Function for Character to waste time saving Wilson
        ~MaryRobinson(); //Destructor
};

#endif