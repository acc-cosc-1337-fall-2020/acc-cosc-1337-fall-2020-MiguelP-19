//cpp
#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;    
    set_next_player();
}

void TicTacToe::display_board() const
{
    int line = 0;
    for (int i = 0; i < pegs.size(); i++)
    {
        std::cout<< pegs[i];
        if (line == 2)
        {
            std::cout<< std::endl;
            line = 0;
        }
        else
        { 
        std::cout<< "|";
        line++;
        }
    }
    
}

void TicTacToe::set_next_player()
{
    if (player == "X") player = "O";
    else player = "X";
}

bool TicTacToe::check_board_full()
{
    bool full = true;

    for (int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            full = false;
        }
    }
    return full;
}

void TicTacToe::clear_board()
{
    std::vector<std::string> clear(9, " ");
    pegs = clear;
}