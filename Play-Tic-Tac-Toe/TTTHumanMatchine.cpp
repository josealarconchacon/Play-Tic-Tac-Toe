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

void TTTHumanMatchine::Matchine_vs_Player() {
    std::string playerName;
    std::cout<<"\n";
    std::cout<<"  \t\tEnter your name: ";
    std::cin>>playerName;
    while (true) {
        DisplayBoard();
        if(BoardCounter(XTurn) == BoardCounter(OTurn)) {
            std::cout<<playerName<<" is your turn."<<std::endl;
            PlayerXChoice();
        } else {
            MatchineChoice();
        }
        char winner = IsWinner();
        if(winner == XTurn) {
            DisplayBoard();
            std::cout<<playerName<<" won the game"<<std::endl;
            break;
        } else if(winner == OTurn) {
            std::cout<<"Computer won the game"<<std::endl;
            break;
        } else if(winner == Draw) {
            std::cout<<"Game Draw"<<std::endl;
            break;
        }
    }
}

void TTTHumanMatchine::MatchineChoice() {
    srand(time(0));
    int choice;
    do {
        choice = rand() % 10;
    } while(BOARD[choice] != ' ');
    BOARD[choice] = OTurn;
}

void TTTHumanMatchine::PlayerXChoice() {
    while (true) {
        int choice;
        std::cout<<"Select from 1 - 9: ";
        std::cin>>choice;
        choice--;
        if(choice < 0 || choice > 8) {
            std::cout<<"Select a correct posistion from 1 - 9: "<<std::endl;
        } else if(BOARD[choice] != SPACE) {
            std::cout<<"Select an empty positiin: ";
            break;
        } else {
            BOARD[choice] = XTurn;
            break;
        }
    }
}

int TTTHumanMatchine::BoardCounter(char countSymble) {
    int total = 0;
    for(int i = 0; i < 9; i++) {
        if(BOARD[i] == countSymble) {
            total += 1;
        }
    }
    return  total;
}

char TTTHumanMatchine::IsWinner() {
    //    hotizontal
    if(BOARD[0] == BOARD[1] && BOARD[1] == BOARD[2] && BOARD[0] != ' ') {
        return BOARD[0];
    }
    if(BOARD[3] == BOARD[4] && BOARD[4] == BOARD[5] && BOARD[3] != ' ') {
        return BOARD[3];
    }
    if(BOARD[6] == BOARD[7] && BOARD[7] == BOARD[8] && BOARD[6] != ' ') {
        return BOARD[6];
    }
    // vertical
    if(BOARD[0] == BOARD[3] && BOARD[3] == BOARD[6] && BOARD[0] != ' ') {
        return BOARD[0];
    }
    if(BOARD[1] == BOARD[4] && BOARD[4] == BOARD[7] && BOARD[1] != ' ') {
        return BOARD[1];
    }
    if(BOARD[2] == BOARD[5] && BOARD[5] == BOARD[8] && BOARD[2] != ' ') {
        return BOARD[2];
    }
    // deagonal
    if(BOARD[0] == BOARD[4] && BOARD[4] == BOARD[8] && BOARD[0] != ' ') {
        return BOARD[0];
    }
    if(BOARD[2] == BOARD[4] && BOARD[4] == BOARD[6] && BOARD[2] != ' ') {
        return BOARD[2];
    }
    if(BoardCounter(XTurn) + BoardCounter(OTurn) < 9) {
        return Continue;
    } else {
        return Draw;
    }
}

void TTTHumanMatchine::DisplayBoard() {
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << BOARD[0] << "  |  " << BOARD[1] << "  |  " << BOARD[2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << BOARD[3] << "  |  " << BOARD[4] << "  |  " << BOARD[5] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << BOARD[6] << "  |  " << BOARD[7] << "  |  " << BOARD[8] << std::endl;
    std::cout << "     |     |     " << std::endl << std::endl;
}
