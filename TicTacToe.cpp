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

std::string to_emoji(Title title){
    if(title == Title::X){
        return "❌";
    } else if (title == Title::O){
        return "⭕️";
    } else {
        return "⬜️";
    }
}

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

    //Displaying board
    void DisplayBoard()
    {
        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                cout << get_emoji(board_[row][col]) << " \n" [col == 2];
            }
        }
    }

    Position GetPlayerChoice()
    {
        std::cout << "\n";
        std::cout << "What row do you want: ";
        getline(std::cin, choice1);
        std::cout << "\n";
        std::cout << "What column do you want: ";
        getline(std::cin, choice2);
        int choice1 = stoi(choice1);
        int choice2 = stoi(choice2);
        return Position{choice1, choice2};
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
