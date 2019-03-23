/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The source code file for the Characters abstract class,
**                  which defines getter and setter functions for the
**                  different characters type, time needed for raft making, 
**                  and time limit to acquire necessary items given raft
**                  making ability. This file also includes an empty
**                  definition for the character constructor and destructor.    
*************************************************************************/

#include <iostream>
#include "Characters.hpp"

/*Default constructor intentionally left empty as Characters are constructed
in the derived classes' constructor. */
Characters::Characters()
{

}

//Function sets the type name of Character 
void Characters::setType(std::string typeIn)
{
    type = typeIn;
}

//Function returns the name of a Character type
std::string Characters::getType()
{
    return type;
}

//Function sets the Character type's timeLimit for acquiring materials for raft making
void Characters::setTimeLimit(int timeLimitIn)
{
    timeLimit = timeLimitIn;
}

//Function returns the timeLimit for a Character type to acquire materials for raft making
int Characters::getTimeLimit()
{
    return timeLimit;
}

//Function sets time taken for Character to make a raft
void Characters::setRaftMaking(int raftMakingIn)
{
    raftMaking = raftMakingIn;
}

//Function returns time to make raft for Character type
int Characters::getRaftMaking()
{
    return raftMaking;
}

//Destructor
Characters::~Characters()
{

}