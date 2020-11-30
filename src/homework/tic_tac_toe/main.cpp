#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() 
{
	string player;
	string newGame;
	TicTacToe tictactoe;
	TicTacToeManager manager;
	cout<< "\tTic-Tac-Toe Game"<< endl;
	cout<< "(Enter N to stop playing; otherwise,"
	<< " enter anything to start a new game): ";
	cin>> newGame;

	while (newGame != "N") 
	{
		while(player != "X" && player != "O")
		{
			cout<< "Player 1 (X or O): ";
			cin>> player;
		}
		tictactoe.start_game(player);
		cin>> tictactoe;
		cout<< tictactoe;

		if(tictactoe.get_winner() == "C")
		{
			cout<< "The game was a tie!"<< endl;
		}
		else
		{
			cout<< "Player "<< tictactoe.get_winner()<< " won!"<< endl;
		}

		manager.save_game(tictactoe);
		cout<< "Would you like to play another game (N for no): ";
		cin>> newGame;
	}
	cout<< manager;

	return 0;
}