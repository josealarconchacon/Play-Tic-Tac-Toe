//
//  WelcomeToTheGame.cpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#include <iostream>
#include "WelcomeToTheGame.hpp"

// Display game menu
void WelcomeToTheGame::IntroToGame() const {
    std::cout<<"\n";
    std::cout<<"\t\t\tWelcome to Tic Tac Toe Game\n\n";
    std::cout<<"\t\tSelect your options to start the game:\n\n";
    std::cout<<"\t\t\t1 - Human vs Human.\n";
    std::cout<<"\t\t\t2 - Human vs Matchine.\n";
    std::cout<<"\t\t\t3 - Matchine vs Matchine.\n";
    std::cout<<"\t\t\t4 - Exit.\n\n";
    std::cout<<"\t\tEnter your choice and press return: ";
}
