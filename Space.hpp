/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the Space abstract class, which
**                  declares protected member variables, getter and
**                  setter functions, and virtual functions to be inherited 
**                  by the child classes Shore, Reef, Peak, Basecamp,
**                  Forest, and Hatch.
*************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include <string>

class Space
{
    protected:
        std::string item; //Variable for the item in a space
        std::string spaceName; //Variable to hold the name of the space
        Space * top;    //Pointers to Space objects to hold the Spaces
        Space * right;  //adjacent to the Space the character is currently in.
        Space * bottom; //These pointers will be set in the constructor for a Space.
        Space * left;
        int visitCounter;   //Vairable to track the number of times a space is visited

    public:
        Space(); //Default constructor
        void setItem(std::string); //Function sets the item in a Space
        std::string getItem(); //Function returns the item in a Space
        void setSpaceName(std::string); //Function sets the name of a Space type
        std::string getSpaceName(); //Function returns the name of the Space type
        void setVisitCounter(int); //Function sets the visitCounter variable
        int getVisitCounter(); //Function returns number of visits a player has made to Space
        void setTopSpace(Space *); //Function sets the Space on top of the Space
        Space * getTopSpace(); //Function returns the Space on top of the Space
        void setRightSpace(Space *); //Function sets the Space to the right of the Space
        Space * getRightSpace(); //Function returns the Space to the right of the Space
        void setBottomSpace(Space *); //Function sets the Space on the bottom of the Space
        Space * getBottomSpace(); //Function returns the Space on the bottom of the Space
        void setLeftSpace(Space *); //Function sets the Space to the right of the Space
        Space * getLeftSpace(); //Function returns the Space to the right of the Space
        virtual int randomEvent() = 0; /*Pure virtual function calls for a random
                                    event to occur in each Space. Each child class
                                    defines its own particular randomEvent. */
        virtual int moveMenu() = 0; /*Pure virtual function prints the move menu
                                    to the screen for each Space for the user to 
                                    decide where to go next. */
        virtual void printSpace() = 0; /*Pure virtual function prints the space
                                    to the screen for each Space so the user 
                                    can see what the space looks like. */
        virtual ~Space(); //Destructor
        



};

#endif