//
//  TTTHumanHuman.hpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#ifndef TTTHumanHuman_hpp
#define TTTHumanHuman_hpp

#include <stdio.h>

class TTTHumanHuman {
private:
    char BOARD[9];
    char PLAYERS;
    const char X = 'X', O = 'O';
    const char BLANK = '_';
public:
    void Clear();
    void WelcomeMessage();
    void DisplayBoard();
    bool IsBlankSpace(int position);
    void Play(int position, char piece);
    char Turn();
    void SwitchTurn();
    bool IsWinner(char player) const;
    void StartGame();
};

#endif /* TTTHumanHuman_hpp */
