/**
 * Michael Doan
 * Dennis Lim
 * PE4
 * Implementing the Tic Tak Toe!
*/

#include <iostream>
using namespace std; 

// enum class TilesSquare = {X_title, O_title};
enum class Title {X, O, blank};

// used to track positions on the board
struct Position {
	int row;
	int col;

	bool operator==(const Position &other) {
		return row == other.row && col == other.col;
	}
};

class TicTacToe {
    public:
        /**
         * Constructor creates the board
        */
        TicTacToe() {
            CreateBoard(); 
        }

    private: 
	    Title board_[3][3];

        /**
         * creates a 3 by 3 arr of type Title
        */
	void CreateBoard() {
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				board_[i][j] = Title::blank; 
			}
		}
	}
};

/**
 * main will start the game
*/
int main() {
	// Calls CreateBoard() with the constructor function
	TicTacToe game; 
}
