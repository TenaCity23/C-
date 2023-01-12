//============================================================================
// Name        : TicTacToe.cpp
// Author      : An Nguyen
// Description : Tic Tac Toe Game!
//============================================================================

#include <iostream>
#include <vector>
#include "ttt.h"
using namespace std;

int main() {

	// Declaration of all variables to be used
	int count = 0;
	int num;
	char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	vector<int> mark;

	//Introduction
	cout << "Welcome to the Tic-Tac-Toe Game!" << endl << endl;
	cout << "Player 1 = 'X' \nPlayer 2 = 'O'" << endl << endl;

	// Draw initial board
	draw(board);

	// While loop to keep the game running until out of spaces on board
	while (count < 9) {

		// Takes in Player 1 mark
		cout << "Player 1 enter a number: ";
		cin >> num;

		// Checks whether number has been taken already
		for(unsigned int i = 0; i < mark.size(); i++) {
			if (num == mark[i]) {
				cout << "Number already taken. Enter another number: ";
				cin >> num;
			}
		}

		// Uses the function to check if number is in range
		while (checknum(num) == true) {
			cout << "Invalid Number, try again: ";
			cin >> num;
		}

		// Updates the vector to contain the valid, entered value; updates board too
		mark.push_back(num);
		update1(board, num);

		// Uses function to check for winner
		if (checkx(board)) {
			cout << "Player 1 wins!" << endl;
			break;
		}

		// Increases count for while loop
		count++;

		// If count reaches 9 (out of space on board), break out of loop early
		if (count == 9) {
			break;
		}

		/**********************************************/

		// Does same thing above but for Player 2^^

		cout << "Player 2 enter a number: ";
		cin >> num;

		for(unsigned int i = 0; i < mark.size(); i++) {
			if (num == mark[i]) {
				cout << "Number already taken. Enter another number: ";
				cin >> num;
			}
		}

		while (checknum(num) == true) {
			cout << "Invalid Number, try again: ";
			cin >> num;
		}

		mark.push_back(num);
		update2(board, num);

		if (checkx(board)) {
			cout << "Player 2 wins!" << endl;
			break;
		}

		count++;

		if (count == 9) {
			break;
		}

	}

	// Uses checkx function to find if there are any winners
	// If no winners, prints tie
	if(checkx(board) == false) {
		cout << "Both Players Tie!!!" << endl;
	}

	return 0;
}
