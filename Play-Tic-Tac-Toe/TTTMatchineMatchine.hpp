//
//  TTTMatchineMatchine.hpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#ifndef TTTMatchineMatchine_hpp
#define TTTMatchineMatchine_hpp

#include <stdio.h>


class TTTMatchineMatchine {
private:
    char BOARD[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    char SPACE = ' ';
    char OTurn = 'O';
    char XTurn = 'X';
    char Draw = 'D';
    char Continue = 'C';
    
public:
    void DisplayBoard() const;
    void Matchine_X_Choice();
    void Matchine_O_Choice();
    int BoardCounter(char count);
    char IsWinner();
    void Start_Game();
};
#endif /* TTTMatchineMatchine_hpp */
