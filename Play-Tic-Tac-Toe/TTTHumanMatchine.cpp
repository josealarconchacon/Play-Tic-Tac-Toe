//
//  TTTHumanMatchine.cpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#include <iostream>
#include "ctime"
#include "random"
#include "TTTHumanMatchine.hpp"

void TTTHumanMatchine::WelcomeMessage() {
    std::cout<<"\n\n";
    std::cout<<"\t\t\tTic Tac Toe\n";
    std::cout<<"\tPlayer 1 (X)  -  Matchine (O)\n\n";
}

void TTTHumanMatchine::Clear() {
    for(int i = 0; i < 9; i++) {
        BOARD[i] = BLANK;
    }
}

void TTTHumanMatchine::DisplayBoard() {
    for(int i = 0; i < 9; i++) {
        std::cout<<"\t\t"<<BOARD[i];
        if(i % 3 == 2) {
            std::cout<<"\n\n";
        }
    }
}

void TTTHumanMatchine::GetPlayerName() {
    std::string name;
    std::cout<<"Player 1, Enter your name: ";
    std::cin>>name;
}


