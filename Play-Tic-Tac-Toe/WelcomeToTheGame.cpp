//
//  WelcomeToTheGame.cpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#include <iostream>
#include "WelcomeToTheGame.hpp"

void WelcomeToTheGame::IntroToGame() {
    std::cout<<"\t\t\t Welcome to TTT\n\n";
    std::cout<<"\t Select one of the Options below:\n\n";
    std::cout<<"\t\t 1 - Human vs Human\n";
    std::cout<<"\t\t 2 - Human vs Matchine\n";
    std::cout<<"\t\t 3 - Matchine vs Matchine\n";
    std::cout<<"\t\t 4 - Exit\n\n";
    std::cout<<"\t\t Enter your choice and press return: ";
}
