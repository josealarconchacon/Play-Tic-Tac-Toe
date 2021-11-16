//
//  TTTHumanMatchine.hpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#ifndef TTTHumanMatchine_hpp
#define TTTHumanMatchine_hpp

#include <stdio.h>

class player {
    std::string name;
    int numWins;
};

class TTTHumanMatchine {
private:
    char BOARD[9];
    const char BLANK = '_';
    player Players[2];
    
public:
    void Clear();
    void WelcomeMessage();
    void GetPlayerName();
    void DisplayBoard();
};

#endif /* TTTHumanMatchine_hpp */
