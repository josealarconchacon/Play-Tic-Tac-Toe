//
//  TTTHumanMatchine.hpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#ifndef TTTHumanMatchine_hpp
#define TTTHumanMatchine_hpp

#include <stdio.h>


class TTTHumanMatchine {
private:
    char BOARD[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    char SPACE = ' ';
    char MatchineChart = 'O';
    char XTurn = 'X';
    char Draw = 'D';
    char Continue = 'C';
    
public:
    void DisplayBoard();
    void PlayerXChoice();
    void PlayerOChoice();
    void MatchineChoice();
    int BoardCounter(char countSymble);
    char IsWinner();
    void Matchine_vs_Player();
    void Player_vs_Player();
};

#endif /* TTTHumanMatchine_hpp */
