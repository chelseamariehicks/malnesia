/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the TouristTina class, an 
**                  inherited class of the Characters class. TouristTina.hpp
**                  declares the virtual functions for a Tina Character's
**                  decision making and selfie taking, and a function
**                  for printing the characteristics of a TouristTina.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef TOURISTTINA_HPP
#define TOURISTTINA_HPP

#include "Characters.hpp"

class TouristTina : public Characters
{
    private:

    public:
        TouristTina(); //Default Constructor
        void printChar(); //Function prints the characteristics of a Tina type
        int decisionMaking(); //Function for Tina's decision in some situations
        int wasteTime(); //Function for Character to waste time taking selfies
        ~TouristTina(); //Destructor
};

#endif