#include <iostream>
#include <string>
#include <limits>
class Spot {
private:
    bool isFull;
    std::string quadrant;
    char xOrO;
    //      std::string img;


public:

    Spot(std::string quadrant) {
        this->quadrant = quadrant;
        isFull = false;
        xOrO = ' ';
    }

    void setQuadrant(std::string quadrant) { this->quadrant = quadrant; }//Shorten this if possible.
    std::string getQuadrant() { return quadrant; }
    void setIsFull(bool isFull) { this->isFull = isFull; }
    bool getIsFull(){return isFull;}
    void setXorO(char xOrO) { this->xOrO = xOrO; }

    Spot() {}
};

class Board {
private:
    Spot board[3][3];


public:

    void addLocations(std::string locations[][3]) {
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                board[r][c].setQuadrant(locations[r][c]);
            }
        }
    }

    void showBoard() {   //temporary. Moving this somewhere else is probably better.
        for (int r = 0; r < 3; r++) {
            std::cout << std::endl;
            for (int c = 0; c < 3; c++) {
                std::cout << board[r][c].getQuadrant();
                if (c < 2)std::cout << "     ";
            }
            //if (r < 2) std::cout << std::endl << "============||=================||================ "; //Need to figure out how to Keep the board pinned while only changing the values.
        }
    }
    void boardSelection();
    void validateSelection();


    void checkResult() {//Check if last move is a three in a row or draw.
        if (board[0][0].getQuadrant() == "X" && board[0][1].getQuadrant() == "X" && board[0][2].getQuadrant() == "X" || board[1][0].getQuadrant() == "X"
            && board[1][1].getQuadrant() == "X" && board[1][2].getQuadrant() == "X" || board[2][0].getQuadrant() == "X" && board[2][1].getQuadrant() == "X"
            && board[2][2].getQuadrant() == "X" || board[0][0].getQuadrant() == "X" && board[1][0].getQuadrant() == "X" && board[2][0].getQuadrant() == "X"
            || board[0][1].getQuadrant() == "X" && board[1][1].getQuadrant() == "X" && board[2][1].getQuadrant() == "X")
            std::cout << "  Great job you won the game";

        //if (board[0][0].getQuadrant == 'X' && board[0][1].getQuadrant =='X' && board[0][2].getQuadrant == 'X')
    }
};

void twoPlayer();

std::string playerSwitch();

int main() {

    int r;
    int c;
    bool arraySpot[9];
    std::string locations[3][3] = { "Top Left",    "Top Center",   "Top Right",
                                    "Middle Left", "Middle Center","Middle Right",
                                    "Bottom Left", "Bottom Center","Bottom Right" };

    Board twoplayer;

    twoplayer.addLocations(locations);
    twoplayer.showBoard();
    int count = 0;

    while (count < 9) {
		twoplayer.boardSelection();
		twoplayer.showBoard();

        count++;
        
    }

    return 0;

}

void Board::validateSelection() {//Check if X or O already exist in spot //Remove function and add to Board Selection once complete.
    bool isFull = false; //Finish Later - Moumen
    if (isFull == true) {
        std::cout << "\nThis spot is already filled";
    }
}

void Board::boardSelection() {

    std::string selection;
    std::cout << "\nChoose a spot: ";
    std::getline(std::cin, selection);
    
//    while()

    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            if (board[r][c].getQuadrant() == selection) {
            	
            	if(board[r][c].getIsFull()==false){ //Finish Later- Moumen
            	board[r][c].setQuadrant(playerSwitch());
                board[r][c].setIsFull(true);	
				}
               

            }
        }
    }
    //    std::cout<<board[0][0].getQuadrant();
    //    std::cout<<selection;
}

std::string playerSwitch() {
    static int x;

    if (x % 2 == 0) {
        //std::cout << "\nPlayer X" << x;
        x++;
        return "X";
    }
    else {
        //std::cout << "\nPlayer O" << x;
        x++;
        return "O";
    }

}

void twoPlayer() {  //Store the x and o spots for each player??

}
