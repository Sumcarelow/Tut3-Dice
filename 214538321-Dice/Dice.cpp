#include"Dice.h"


int Dice::getDiceAarray() const{
	return newDiceArray[100];
}
int	Dice::getRolls() const{
	return newRollNumber;
}


Dice::~Dice(){

}

Dice::Dice( int DiceArray[], int rollNumber, int n){
	int i;
	for (i = 0; i <= n; i++){
		newDiceArray[i] = DiceArray[i];
	}
	newRollNumber = rollNumber;
}

float Dice::average(){

	int i, sum;
	sum = 0;
	for (i = 0; i = newRollNumber; i++){
		sum = +newDiceArray[i];
	}
	return sum / newRollNumber;
}