#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() 
{
	string player;
	TicTacToe tictactoe;
	cout<< "Tic-Tac-Toe Game"<< endl;
	cout<< "Player 1 (X or O): ";
	cin>> player;

	tictactoe.start_game(player);
	int position = 1;
	while (position != 0)
	{
		cout<< "Enter where you would like to mark the board (1 - 9 ; Enter 0 to stop): ";
		cin>> position;
		tictactoe.mark_board(position);
		tictactoe.display_board();
	}

	return 0;
}