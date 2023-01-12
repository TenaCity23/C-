// Header file for TicTacToe Game

#ifndef TTT_H_
#define TTT_H_


#include <iostream>
#include <vector>
using namespace std;

// Draws TTT Board
void draw(char board[]) {

    cout << "     |     |      " << endl;
    cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << endl;

    cout << "_____|_____|_____ " << endl;
    cout << "     |     |      " << endl;

    cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << endl;

    cout << "_____|_____|_____ " << endl;
    cout << "     |     |      " << endl;

    cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << endl;
    cout << "     |     |      \n";

    cout << endl;

}

// Checks whether the number entered is in the range of 1-9
bool checknum(int num){
	if(num < 0 || num > 10) {
		return true;
	} else {
		return false;
	}
}

// Checks whether there is a winner or not
bool checkx(char board[]) {
	if (board[0] == board[1] && board[1] == board[2]) {
		return true;
	} else if (board[3] == board[4] && board[4] == board[5]) {
		return true;
	} else if (board[6] == board[7] && board[7] == board[8]) {
		return true;
	} else if (board[0] == board[4] && board[4] == board[8]) {
		return true;
	} else if (board[2] == board[4] && board[4] == board[6]) {
		return true;
	} else {
		return false;
	}
}

// Player 1's mark
void update1(char board[], int num) {
	board[num-1] = 'X';
	cout << endl;
	draw(board);
}

// Player 2's mark
void update2(char board[], int num) {
	board[num-1] = 'O';
	cout << endl;
	draw(board);
}



#endif /* TTT_H_ */
