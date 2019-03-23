/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The source code file for the Space abstract class,
**                  which defines getter and setter functions for the
**                  different Space types, including links to surrounding 
**                  Spaces, items in different Spaces, and visitCounters
**                  for each Space. This file also includes an empty
**                  definition for the character constructor and destructor.    
*************************************************************************/

#include <iostream>
#include "Space.hpp"

/*Default constructor intentionally left empty as Spaces are constructed
in the derived classes' constructor. */
Space::Space()
{

}

//Function sets the item in a Space
void Space::setItem(std::string itemIn)
{
    item = itemIn;
}

//Function returns the item in a Space
std::string Space::getItem()
{
    return item;
}

//Function sets the name of a Space type
void Space::setSpaceName(std::string spaceNameIn)
{
    spaceName = spaceNameIn;
}

//Function returns the name of the Space type
std::string Space::getSpaceName()
{
    return spaceName;
}

//Function sets the visitCounter variable
void Space::setVisitCounter(int visitCounterIn)
{
    visitCounter = visitCounterIn;
}

//Function returns number of visits a player has made to Space
int Space::getVisitCounter()
{
    return visitCounter;
}

//Function sets the Space on top of the Space     
void Space::setTopSpace(Space * topIn)
{
    top = topIn;
}

//Function returns the Space on top of the Space
Space * Space::getTopSpace()
{
    return top;
}
        
//Function sets the Space to the right of the Space        
void Space::setRightSpace(Space * rightIn)
{
    right = rightIn;
}

//Function returns the Space to the right of the Space
Space * Space::getRightSpace()
{
    return right;
}

//Function sets the Space on the bottom of the Space
void Space::setBottomSpace(Space * bottomIn)
{
    bottom = bottomIn;
}

//Function returns the Space on the bottom of the Space
Space * Space::getBottomSpace()
{
    return bottom;
}

//Function sets the Space to the right of the Space
void Space::setLeftSpace(Space * leftIn)
{
    left = leftIn;
}

//Function returns the Space to the right of the Space
Space * Space::getLeftSpace()
{
    return left;
}

//Destructor
Space::~Space()
{

}