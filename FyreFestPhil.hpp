/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the FyreFestPhil class, an 
**                  inherited class of the Characters class. FyreFestPhil.hpp
**                  declares the virtual functions for a FFPhil Character's
**                  decision making and selfie taking, and a function
**                  for printing the characteristics of a FyreFestPhil.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef FYREFESTPHIL_HPP
#define FYREFESTPHIL_HPP

#include "Characters.hpp"

class FyreFestPhil : public Characters
{
    private:

    public:
        FyreFestPhil(); //Default Constructor
        void printChar(); //Function prints the characteristics of a Phil type
        int decisionMaking(); //Function for Phil's decision in some situations
        int wasteTime(); //Function for Character to waste time taking selfies
        ~FyreFestPhil(); //Destructor
};

#endif