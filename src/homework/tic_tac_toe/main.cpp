#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() 
{
	string player;
	string newGame;
	TicTacToe tictactoe;
	cout<< "\tTic-Tac-Toe Game"<< endl;
	cout<< "(Enter N to stop playing; otherwise,"
	<< " enter anything to start a new game): ";
	cin>> newGame;

	while (newGame != "N") 
	{
		cout<< "Player 1 (X or O): ";
		cin>> player;

		tictactoe.start_game(player);
		int position;
		while (position != 0 && tictactoe.game_over() == false)
		{
			cout<< "Enter where you would like to mark the board (1 - 9 ; Enter 0 to stop): ";
			cin>> position;
			cout<< endl;
			tictactoe.mark_board(position);
			tictactoe.display_board();
			cout<< endl;
		}

		if(tictactoe.get_winner() == "C")
		{
			cout<< "The game was a tie!"<< endl;
		}
		else
		{
			cout<< "Player "<< tictactoe.get_winner()<< " won!"<< endl;
		}

		cout<< "Would you like to play another game (N for no): ";
		cin>> newGame;
	}


	return 0;
}