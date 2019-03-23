/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the Characters abstract class, which
**                  declares protected member variables, getter and
**                  setter functions, and virtual functions to be inherited 
**                  by the child classes TouristTina, FyrePhil, 
**                  AlainBombard and Mary Robinson.
*************************************************************************/

#ifndef CHARACTERS_HPP
#define CHARACTERS_HPP

#include <string>

class Characters
{
    protected:
        std::string type;   //Variable for the type of character
        int timeLimit;      //Counter variable for tracking a Character's time on the island
        int raftMaking; //Variable for how long it takes a Character to build the raft
    
    public:
        Characters();   //Default constructor
        void setType(std::string); //Function sets the Character type as a string
        std::string getType();    //Function returns the name of the Character type
        void setTimeLimit(int); //Function sets the Character type's timeLimit to acquire materials
        int getTimeLimit();     //Function returns the timeLimit for a Character type to acquire materials
        void setRaftMaking(int); //Function sets time taken for Character to make a raft
        int getRaftMaking(); //Function returns time to make raft for Character type
        virtual void printChar() = 0; /*Pure virtual function prints the 
                                      characteristics of a Character type.*/
        virtual int decisionMaking() = 0; /*Function for Character's decision 
                                            in some situations. */
        virtual int wasteTime() = 0; //Function for Character to waste time
        virtual ~Characters(); //Destructor declared but not defined
};

#endif