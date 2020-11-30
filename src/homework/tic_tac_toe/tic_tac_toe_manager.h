#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe.h"

using namespace std;

//h

class TicTacToeManager
{
public:
    friend ostream& operator<<( ostream& out, TicTacToeManager& manager);
    void save_game(TicTacToe);
    void get_winner_total(int& x,int& o, int& t);
private:
    void update_winner_count(string);

    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int tie = 0;
};