#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X") {
	TicTacToe game_test;
	game_test.start_game("X");

	REQUIRE(game_test.get_player() == "X");
}

TEST_CASE("Test first player set to O") {
	TicTacToe game_test;
	game_test.start_game("O");

	REQUIRE(game_test.get_player() == "O");
}

TEST_CASE("Test Tic Tac Toe Class") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(1);
	game_test.mark_board(2);
	game_test.mark_board(3);
	game_test.mark_board(4);
	game_test.mark_board(5);
	game_test.mark_board(7);
	game_test.mark_board(6);
	game_test.mark_board(9);
	game_test.mark_board(8);
	
	REQUIRE(game_test.game_over() == true);
	REQUIRE(game_test.get_winner() == "C");
}

TEST_CASE("Test Win by First Column") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(1);
	game_test.mark_board(3);
	game_test.mark_board(4);
	game_test.mark_board(8);
	game_test.mark_board(7);

	REQUIRE(game_test.game_over() == true);
}

TEST_CASE("Test Win by Second Column") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(2);
	game_test.mark_board(1);
	game_test.mark_board(5);
	game_test.mark_board(4);
	game_test.mark_board(8);

	REQUIRE(game_test.game_over() == true);
}

TEST_CASE("Test Win by Third Column") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(3);
	game_test.mark_board(1);
	game_test.mark_board(6);
	game_test.mark_board(4);
	game_test.mark_board(9);

	REQUIRE(game_test.game_over() == true);
}

TEST_CASE("Test Win by First Row") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(1);
	game_test.mark_board(4);
	game_test.mark_board(2);
	game_test.mark_board(6);
	game_test.mark_board(3);

	REQUIRE(game_test.game_over() == true);
}

TEST_CASE("Test Win by Second Row") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(4);
	game_test.mark_board(1);
	game_test.mark_board(5);
	game_test.mark_board(3);
	game_test.mark_board(6);

	REQUIRE(game_test.game_over() == true);
}

TEST_CASE("Test Win by Third Row") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(7);
	game_test.mark_board(1);
	game_test.mark_board(8);
	game_test.mark_board(3);
	game_test.mark_board(9);

	REQUIRE(game_test.game_over() == true);
}

TEST_CASE("Test Win by Top-Left Diagonal") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(1);
	game_test.mark_board(3);
	game_test.mark_board(5);
	game_test.mark_board(4);
	game_test.mark_board(9);

	REQUIRE(game_test.game_over() == true);
}

TEST_CASE("Test Win by Bottom-Left Diagonal") {
	TicTacToe game_test;
	game_test.start_game("X");
	game_test.mark_board(7);
	game_test.mark_board(2);
	game_test.mark_board(5);
	game_test.mark_board(4);
	game_test.mark_board(3);

	REQUIRE(game_test.game_over() == true);
}
