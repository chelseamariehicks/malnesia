/*************************************************************************
** Author:          Chelsea Hicks
** Date:            3/17/19
** Description:     The header file for the GamePlay class, which
**                  declares private member variables to track whether the
**                  game is over, pointer variables for the currentSpace and
**                  Character type choice of the player, a container to hold
**                  items acquired during the game, and a counter for time
**                  remaining.
**                  This file also declares member functions for running
**                  the operations of the climate change inspired game, 
**                  including the menu for the user to select whether or not
**                  to play and what characters to be, the gameLoop which
**                  goes through the components of each round of game play,
**                  and a function for clearing the screen.
**                  The default constructor and destructor are also declared here.
*************************************************************************/

#ifndef GAMEPLAY_HPP
#define GAMEPLAY_HPP

#include <string>
#include <vector>

#include "Characters.hpp"
#include "Space.hpp"

class GamePlay
{
    private:
        bool gameOver; //Variable to keep track of whether the game is over
        Characters * player; //Pointer to a Character type for the player
        std::vector<std::string> backpack; //Container to hold items found in the game <-may change to vector
        Space * currentSpace; //Pointer to a Space type for the currentSpace the character is in
        Space * shore;
        Space * reef;
        Space * base;
        Space * hatch;
        Space * forest;
        Space * peak;
        int move; //Variable holds the selection of the user from the moveMenu of currentSpace
        int time;   //Variable for the amount of time left in the game
        bool buildRaft; //Variable to hold whether the user can build a raft or not
        bool otherEscape; //Variable to hold whether the user can escape another way

    public:
        GamePlay(); //Default constructor
        int menu(); //Function displays a menu for users to play the game and select their character
        void gameLoop(); //Function for controlling the flow of the game--
        void makeMap(); //Function creates the spaces for the game 
        void printMap(); //Function prints the entire map of Malnesia
        void printTombstone(); //Function prints tombstone to the screen
        void victory(); //Function prints out notice of victory for winning the game
        void deleteMap(); //Function frees dynamically allocated memory for the map Spaces
        void emptyBackpack(); //Function to delete the items in the backpack at the end of the game
        void collectItem(std::string); //Function adds the item from a Space to backpack container for player
        void printBackpack(); //Function prints the contents of the backpack
        void setBuildRaft(bool); //Function sets the variable buildRaft
        bool getBuildRaft(); //Function returns whether player can build raft
        void readyBuild(); //Function determines if player has materials for building a raft
        void setgameOver(bool); //Function sets the variable gameOver
        bool getGameOver();     //Function returns whether the game is over
        void setOtherEscape(bool); //Function sets the variable otherEscape
        bool getOtherEscape();     //Function returns whether there is a different way to escape
        void setTime(int);      //Function sets the amount of time left in the game
        int getTime();      //Function returns the amount of time left in the game
        void clearScreen(); //Function to clear the screen
        ~GamePlay(); //Destructor to free up memory

};

#endif