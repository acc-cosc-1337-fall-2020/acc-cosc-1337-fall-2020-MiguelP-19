#include <string>
#include <vector>
#include <iostream>
#pragma once

using namespace std;

//h
class TicTacToe
{
public:
    bool game_over();
    void start_game(string);
    void mark_board(int);
    string get_player() const {return player;};
    const string get_winner() {return winner;};
    friend ostream& operator<<( ostream& out, TicTacToe& ttt);
    friend istream& operator>>( istream& in, TicTacToe& ttt);
private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    const void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();

    string player;
    vector<string> pegs;
    string winner;
};
