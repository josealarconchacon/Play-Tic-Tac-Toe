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
    char OTurn = 'O';
    char XTurn = 'X';
    char Draw = 'D';
    char Continue = 'C';
    
public:
    void DisplayBoard() const;
    void PlayerXChoice();
    void MatchineChoice();
    int BoardCounter(char count);
    char IsWinner();
    void Matchine_vs_Player();
};

#endif /* TTTHumanMatchine_hpp */
