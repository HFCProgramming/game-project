
#include <iostream>

void twoPlayer();
void checkResult();
void validateSelection();
void playerSwitch();
//void boardSelection(int array[][]);


int main() {

	int r;
	int c;
	int array[3][3] = { 0,1,2,3,4,5,6,7,8 };

	/*
   for(r = 0; r < 3 ; r++){
	   std::cout<<std::endl;

	   for(int c = 0; c< 3; c++){


		   std::cout<<array[r][c];

		   if(c < 2)std::cout<<" || ";

	   }
	   if(r < 2) std::cout<<std::endl<<"===============  ";*/

	playerSwitch();


	return 0;
}
/*void boardSelection(int array[][]) {

	int selection;
	std::cout << "Choose a spot: ";

	std::cin >> selection;

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


void validateSelection() {//Check if X or O already exist in spot


}


void checkResult() {//Check if last move is a three in a row or draw.


}

void twoPlayer() {  //Store the x and o spots for each player??



}




