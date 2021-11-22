//
//  main.cpp
//  Play-Tic-Tac-Toe
//
//  Created by Jose Alarcon Chacon on 11/4/21.
//

#include <iostream>
#include "WelcomeToTheGame.hpp"
#include "TTTHumanHuman.hpp"
#include "TTTHumanMatchine.hpp"

using namespace std;


int main() {
    int choice;
    WelcomeToTheGame* msg = new WelcomeToTheGame();
    msg->IntroToGame();
    cin>>choice;
    if(choice == 1) {
        TTTHumanHuman* tictactoe = new TTTHumanHuman();
        tictactoe->StartGame();
    }else if(choice == 2) {
        TTTHumanMatchine* tictactoe_matchine = new TTTHumanMatchine();
        tictactoe_matchine->Matchine_vs_Player();
        cout<<"Human vs Matchine\n";
    } else if(choice == 3) {
        cout<<"Matchine vs Matchine\n";
    }else {
        cout<<"Bye\n";
    }
  
    
//    TTTHumanMatchine* tictactoe_matchine = new TTTHumanMatchine();
//    tictactoe_matchine->Matchine_vs_Player();
    
//    WelcomeToTheGame* msg = new WelcomeToTheGame();
//    msg->IntroToGame();
    

//    TTTHumanHuman* tictactoe = new TTTHumanHuman();
//    tictactoe->StartGame();
    
    
    return 0;
}






/*
 Need to fix error: "Cannot jump from switch statement to this case label"
 
 int choice;
 do {
     // create new instance
     WelcomeToTheGame* msg = new WelcomeToTheGame();
     msg->IntroToGame();
     cin>>choice;
     
     switch (choice) {
         case 1:
             TTTHumanHuman* tictactoe = new TTTHumanHuman();
             tictactoe->StartGame();
             break;
         case 2:
             cout<<"Human vs Matchine\n";
             break;
         case 3:
             cout<<"Matchine vs Matchine\n";
             break;
         case 4:
             cout<<"Exit Game\n";
             break;
         default:
             break;
     }
 } while(choice != 4);
 */
