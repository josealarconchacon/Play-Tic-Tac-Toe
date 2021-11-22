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

void TTTHumanMatchine::DisplayBoard() {
    std::cout<<"  "<<"   |  "<<"   |  \n";
    std::cout<<"  "<<BOARD[0]<<"  |  "<<BOARD[1]<<"  |  "<<BOARD[2]<<"\n";
    std::cout<<"------------------\n";
    std::cout<<"  "<<"   |  "<<"   |  \n";
    std::cout<<"  "<<BOARD[3]<<"  |  "<<BOARD[4]<<"  |  "<<BOARD[5]<<"\n";
    std::cout<<"------------------\n";
    std::cout<<"  "<<"   |  "<<"   |  \n";
    std::cout<<"  "<<BOARD[6]<<"  |  "<<BOARD[7]<<"  |  "<<BOARD[8]<<"\n";
    std::cout<<"\n\n";
}

void TTTHumanMatchine::PlayerXChoice() {
    while (true) {
        std::cout<<"Select position: ";
        int userChoice;
        std::cin>>userChoice;
        userChoice -= 1;;
        if(userChoice < 0 || userChoice > 8) {
            std::cout<<"Select a correct position\n";
        } else if(BOARD[userChoice] != SPACE) {
            std::cout<<"Select an ampty position\n";
        } else {
            BOARD[userChoice] = XTurn;
            break;
        }
    }
}

void TTTHumanMatchine::MatchineChoice() {
    // generate random number to choose from (1 - 9)
    srand(time(0));
    int makeChoice;
    do{
        makeChoice = rand() % 10;
    } while(BOARD[makeChoice] != SPACE);
    BOARD[makeChoice] = MatchineChart;
}


// count how many time a symble appear in the board
int TTTHumanMatchine::BoardCounter(char countSymble) {
    int total = 0;
    for(int i = 0; i < 9; i++) {
        if(BOARD[i] == countSymble) {
            total += 1;
        }
    }
    return total;
}

char TTTHumanMatchine::IsWinner() {
    // horizontal line
    if(BOARD[0] == BOARD[1] && BOARD[1] == BOARD[2] && BOARD[0] != SPACE) {
        return BOARD[0];
    }
    if(BOARD[3] == BOARD[4] && BOARD[4] == BOARD[5] && BOARD[3] != SPACE) {
        return BOARD[3];
    }
    if(BOARD[6] == BOARD[7] && BOARD[7] == BOARD[8] && BOARD[4] != SPACE) {
        return BOARD[6];
    }
    // vertical line
    if(BOARD[0] == BOARD[3] && BOARD[3] == BOARD[6] && BOARD[0] != SPACE) {
        return BOARD[0];
    }
    if(BOARD[1] == BOARD[4] && BOARD[4] == BOARD[7] && BOARD[1] != SPACE) {
        return BOARD[1];
    }
    if(BOARD[2] == BOARD[5] && BOARD[5] == BOARD[8] && BOARD[2] != SPACE) {
        return BOARD[2];
    }
    // deagonal line
    if(BOARD[0] == BOARD[4] && BOARD[4] == BOARD[8] && BOARD[0] != SPACE) {
        return BOARD[0];
    }
    if(BOARD[2] == BOARD[4] && BOARD[4] == BOARD[6] && BOARD[2] != SPACE) {
        return BOARD[2];
    }
    
    if(BoardCounter('X') + BoardCounter('O') < 9) {
        return 'C'; // Countinue
    } else {
        return 'D'; // Daow
    }
}


void TTTHumanMatchine::Matchine_vs_Player() {
    std::string playerName;
    std::cout<<"Enter player name: ";
    std::cin>>playerName;
    while (true) {
        DisplayBoard();
        if(BoardCounter(XTurn) == BoardCounter(MatchineChart)) {
            std::cout<<playerName<<" turn\n";
            PlayerXChoice();
        } else {
            MatchineChoice();
        }
        char winner = IsWinner();
        
        if(winner == XTurn) {
            DisplayBoard();
            std::cout<<playerName<<" Won the game\n";
            break;
        }
        if(winner == MatchineChart) {
            DisplayBoard();
            std::cout<<MatchineChart<<" Won the game\n";
            break;
        }
        if(winner == Draw) {
            std::cout<<" Draw\n";
            break;
        }
    }
}

