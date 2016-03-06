#include<iostream>
#include<string>
#include "Dice.h"

using namespace std;

int main(){
	int DiceRoll, DiceArray[100], NumberOfRolls, i, n;
	NumberOfRolls = 0;
	cout << "Please enter the number of rolls" << endl;
	cin >> n;
	for (i = 0; i <= n; i++){
		DiceRoll = rand() % 6 + 1;
		DiceArray[i] = DiceRoll;
		NumberOfRolls = +1;
	}
	
	Dice Dice1(DiceArray[], NumberOfRolls, n) ;
	
	
	
	cout << "the average of the rolled numbers is:" << Dice1.average() << endl;
	cout << endl << Dice1.getDiceAarray[1] << endl;



}