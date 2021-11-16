//
//  TTTHumanHuman.cpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#include <iostream>
#include "TTTHumanHuman.hpp"

void TTTHumanHuman::WelcomeMessage() {
    std::cout<<"\n\n";
    std::cout<<"\t\t\tTic Tac Toe\n";
    std::cout<<"\tPlayer 1 (X)  -  Player 2 (O)\n\n";
}

void TTTHumanHuman::Clear() {
    for(int i = 0; i < 9; i++) {
        BOARD[i] = BLANK;
    }
}

void TTTHumanHuman::DisplayBoard() {
    for(int i = 0; i < 9; i++) {
        std::cout<<"\t\t"<<BOARD[i];
        if(i % 3 == 2) {
            std::cout<<"\n\n";
        }
    }
}

bool TTTHumanHuman::IsBlankSpace(int position) {
    return BOARD[position] == BLANK;
}

void TTTHumanHuman::Play(int position, char piece) {
    if(IsBlankSpace(position)) {
        BOARD[position] = piece;
    }
}

char TTTHumanHuman::Turn() {
    return  PLAYERS;
}

void TTTHumanHuman::SwitchTurn() {
    PLAYERS == X ? PLAYERS = O : PLAYERS = X;
}

bool TTTHumanHuman::IsWinner(char player) const {
    const int WINS[8][3]{
        {0,1,2}, {3,4,5},{6,7,8}, //ACROSS COMBOS
        {0,4,8},{2,4,6},  //DIAGONAL COMBOS
        {0,3,6}, {1,4,7}, {2,5,8} //DOWN COMBOS
    };
    for (int combo = 0; combo < 8; combo++) {
        if (BOARD[WINS[combo][0]] == player &&
            BOARD[WINS[combo][1]] == player &&
            BOARD[WINS[combo][2]] == player) {
            return true;
        }
    }
    return false;
}

void TTTHumanHuman::StartGame() {
    int move = 0, plays = 9, turn = 0;
    WelcomeMessage();
    Clear();
    PLAYERS = X;

    while (turn < plays) {
        DisplayBoard();
        std::cout<<"\t"<<"Your turn: "<<Turn()<<" : ";
        std::cin>>move;
        Play(move, PLAYERS);
        SwitchTurn();
        turn++;
        if(IsWinner(X) || IsWinner(O)) break;
    }
    if(IsWinner(X)) {
        std::cout<<"Congrat (X). You won the game.\n";
    } else if(IsWinner(O)) {
        std::cout<<"Congrat (O). You won the game.\n";
    } else {
        std::cout<<"Draw\n";
    }

}
