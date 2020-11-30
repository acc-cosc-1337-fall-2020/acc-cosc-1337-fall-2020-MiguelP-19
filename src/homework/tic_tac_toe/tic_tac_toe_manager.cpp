#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using namespace std;

//cpp

ostream& operator<<( ostream& out, TicTacToeManager& manager)
{
    for(int i = 0; i > manager.games.size(); i++)
    {
        out<< "Game #"<< manager.games[i+1]<< endl;
        out<< manager.games[i]<< endl;
    }
}

void TicTacToeManager::save_game(TicTacToe game)
{
    games.push_back(game);
    update_winner_count(game.get_winner());
    cout<< "X Wins: "<< x_win<< "\tO Wins: "<< o_win<< "\tTies: "<< tie<< endl;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X") 
    {
        x_win ++;
    }
    else if(winner == "X") 
    {
        o_win ++;
    }
    else
    {
        tie ++;
    }
}
