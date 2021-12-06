//
//  TTTMatchineMatchine.cpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#include <iostream>
#include "ctime"
#include "random"
#include "TTTMatchineMatchine.hpp"

void TTTMatchineMatchine::Start_Game() {
    while (true) {
        DisplayBoard();
        if(BoardCounter(XTurn) == BoardCounter(OTurn)) {
            std::cout<<XTurn<<" is your turn."<<std::endl;
            Matchine_X_Choice();
        } else {
            std::cout<<OTurn<<" is your turn."<<std::endl;
            Matchine_O_Choice();
        }
        char winner = IsWinner();
        if(winner == XTurn) {
            DisplayBoard();
            std::cout<<XTurn<<" won the game"<<std::endl;
            break;
        } else if(winner == OTurn) {
            std::cout<<OTurn<<" won the game"<<std::endl;
            DisplayBoard();
            break;
        } else if(winner == Draw) {
            std::cout<<"Game Draw"<<std::endl;
            break;
        }
    }
}

void TTTMatchineMatchine::Matchine_O_Choice() {
    srand( static_cast<unsigned int>(time(0)));
    int choice;
    do {
        choice = rand() % 10;
    } while(BOARD[choice] != ' ');
    BOARD[choice] = OTurn;
}

void TTTMatchineMatchine::Matchine_X_Choice() {
    srand( static_cast<unsigned int>(time(0)));
    int choice;
    do {
        choice = rand() % 10;
    } while(BOARD[choice] != ' ');
    BOARD[choice] = XTurn;
}

int TTTMatchineMatchine::BoardCounter(char count) {
    int total = 0;
    for(int i = 0; i < 9; i++) {
        if(BOARD[i] == count) {
            total += 1;
        }
    }
    return  total;
}

//check all possible winner
char TTTMatchineMatchine::IsWinner() {
//    horizontal line
    if(BOARD[0] == BOARD[1] && BOARD[1] == BOARD[2] && BOARD[0] != ' ') {
        return BOARD[0];
    }
    if(BOARD[3] == BOARD[4] && BOARD[4] == BOARD[5] && BOARD[3] != ' ') {
        return BOARD[3];
    }
    if(BOARD[6] == BOARD[7] && BOARD[7] == BOARD[8] && BOARD[6] != ' ') {
        return BOARD[6];
    }
//    vertical line
    if(BOARD[0] == BOARD[3] && BOARD[3] == BOARD[6] && BOARD[0] != ' ') {
        return BOARD[0];
    }
    if(BOARD[1] == BOARD[4] && BOARD[4] == BOARD[7] && BOARD[1] != ' ') {
        return BOARD[1];
    }
    if(BOARD[2] == BOARD[5] && BOARD[5] == BOARD[8] && BOARD[2] != ' ') {
        return BOARD[2];
    }
//    diagonal line
    if(BOARD[0] == BOARD[4] && BOARD[4] == BOARD[8] && BOARD[0] != ' ') {
        return BOARD[0];
    }
    if(BOARD[2] == BOARD[4] && BOARD[4] == BOARD[6] && BOARD[2] != ' ') {
        return BOARD[2];
    }
    return BoardCounter(XTurn) + BoardCounter(OTurn) < 9 ? Continue : Draw;
}

// Display Board
void TTTMatchineMatchine::DisplayBoard()const {
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
