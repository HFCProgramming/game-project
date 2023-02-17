
#include <iostream>
#include <string>

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
                if (c < 2)std::cout << " || ";
            }
            if (r < 2) std::cout << std::endl << "============================================ ";
        }
    }
};

void twoPlayer();
void checkResult();
void validateSelection();
void playerSwitch();

int main() {

    int r;
    int c;
    bool arraySpot[9];
    std::string locations[3][3] = { "Top Left   ", "Top  Center  ","Top Right   ",
                                  "Middle Left", "Middle Center","Middle Right",
                                  "Bottom Left", "Bottom Center","Bottom Right" };

    Board twoplayer;
  
    twoplayer.addLocations(locations);
    
    twoplayer.showBoard();



    return 0;

}
/*void boardSelection(int array[][]) {

        int selection;
        std::cout << "Choose a spot: ";

        std::cin >> selection;
        if(selection == 0)

        //array[selection][] = 0;

}*/


void playerSwitch() {
    int x;

    for (x = 0; x < 9; x++) {
        if (x % 2 == 0) {
            std::cout << "\nPlayer X" << x;
        }
        else std::cout << "\nPlayer O" << x;
    
    }
}


void validateSelection() {//Check if X or O already exist in spot //Remove function and add to Board Selection once complete.
    bool isFull = false;
    if (isFull == true) {
        std::cout << "\nThis spot is already filled";
    }
}


void checkResult() {//Check if last move is a three in a row or draw.


}

void twoPlayer() {  //Store the x and o spots for each player??

}