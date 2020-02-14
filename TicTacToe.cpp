/**
 * Michael Doan
 * Dennis Lim
 * PE4
 * Implementing the Tic Tak Toe!
*/

#include <iostream>
#include <string>
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
};

class TicTacToe {
    public:
        /**
         * Constructor creates the board
        */
        TicTacToe() {
            CreateBoard(); 
            int turn = 0;
        }

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

    //Displaying board
    void DisplayBoard(){
        for (int row = 0; row < 3; row++){
            for (int col = 0; col < 3; col++){
                cout << to_emoji(board_[row][col]) << " \n" [col == 2];
            }
        }
    }

    // place marker will get the position of the player and mark it with an x or o
    void PlaceMarker(Position pos){
        Title mark;

        if(turn == 0){  
            mark = Title::X;
        } else{
            mark = Title::O;
        }

        turn++;
        if(turn > 1){
            turn = 0;
        }
   
        if(board_[pos.row][pos.col] == Title::blank){
            board_[pos.row][pos.col] = mark;
        } 
    }

    Position GetPlayerChoice(){
        int choice1, choice2;
        std::cout << "\n";
        std::cout << "What row do you want: ";
        std::cin >> choice1;
        std::cout << "\n";
        std::cout << "What column do you want: ";
        std::cin >> choice2;
        
        return Position{choice1, choice2};
    }

    private: 
	    Title board_[3][3];
        int turn;
};

/**
 * main will start the game
*/
int main() {
	// Calls CreateBoard() with the constructor function
	TicTacToe game; 

    for(int i = 0; i < 9; ++i){
        game.DisplayBoard();
        game.PlaceMarker(game.GetPlayerChoice());
    }
    game.DisplayBoard();
}

