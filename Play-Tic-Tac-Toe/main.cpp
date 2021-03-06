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
#include "TTTMatchineMatchine.hpp"

using namespace std;


int main() {
    char input;
    do {
        int choice;
        WelcomeToTheGame* msg = new WelcomeToTheGame();
        msg->IntroToGame();
        cin>>choice;
        if(choice == 1) {
            TTTHumanHuman* tictactoe = new TTTHumanHuman();
            tictactoe->StartGame();
        }else if(choice == 2) {
            TTTHumanMatchine* tictactoe_human_matchine = new TTTHumanMatchine();
            tictactoe_human_matchine->Matchine_vs_Player();
        } else if(choice == 3) {
            TTTMatchineMatchine* ttt = new TTTMatchineMatchine();
            ttt->Start_Game();
//            cout<<"Bye\n";
        } else if(choice == 4) {
            cout<<"Bye\n";
            break;
        } else {
            cout<<"\n\t\tPlease, Selecte a correct choice: (1, 2, 3)\n";
        }
        cout<<"\t\tWould you like to play agan? (y/n): ";
        cin>>input;
        cout<<"\nThnak you for playing Tic Tac Toe.\n";
    } while(input != 'n');
    
    return 0;
}

