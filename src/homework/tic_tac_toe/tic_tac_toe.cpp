//cpp
#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>

bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }

    else if (check_board_full())
    {
        TicTacToe::winner = "C";
        return true;
    }

    else return false;
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

bool TicTacToe::check_column_win()
{
    if(pegs[0] != " " && pegs[0] == pegs[3] && pegs[3] == pegs [6])
    {
        return true;
    }

    else if(pegs[1] != " " && pegs[1] == pegs[4] && pegs[4] == pegs[7])
    {
        return true;
    }

    else if(pegs[2] != " " && pegs[2] == pegs[5] && pegs[5] == pegs [8])
    {
        return true;
    }
    else false;
}

bool TicTacToe::check_row_win()
{
    if(pegs[0] != " " && pegs[0] == pegs[1] && pegs[1] == pegs[2]) 
    {
        return true;
    }

    else if(pegs[3] != " " && pegs[3] == pegs[4] && pegs[4] == pegs[5]) 
    {
        return true;
    }

    else if(pegs[6] != " " && pegs[6] == pegs[7] && pegs[7] == pegs[8]) 
    {
        return true;
    }
    else false;
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8])
    {
        return true;
    }

    else if(pegs[2] != " " && pegs[2] == pegs[4] && pegs[4] == pegs[6])
    {
        return true;
    }
    else false;
}

void TicTacToe::set_winner()
{
    if (player == "X") winner = "O";
    else winner = "X";
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