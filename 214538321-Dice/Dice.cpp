#include"Dice.h"

void Dice::roll(int n, int i){

	for (i = 0; i == n; i++){
		newDiceRoll = rand() % 6 + 1;
		newDiceArray[i] = newDiceRoll;
		newRollNumber = +1;
	}
}

Dice::Dice(){
	newDiceRoll = 0;
	newDiceArray[100] = 0;
	newRollNumber = 0;

}

float Dice::average(int Array[], int Rolls){
	Array[100] = newDiceArray[100];
	Rolls = newRollNumber;
	int i, sum;
	sum = 0;
	for (i = 0; i = Rolls; i++){
		sum = +Array[i];
	}
	return sum/Rolls;
}