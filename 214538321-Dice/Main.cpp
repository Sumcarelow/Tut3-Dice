#include<iostream>
#include<string>
#include "Dice.h"

using namespace std;

int main(){
	int DiceRoll, DiceArray[100], NumberOfRolls, i, n;
	NumberOfRolls = 0;
	cout << "Please enter the number of rolls" << endl;
	cin >> n;
	
	Dice Dice1;
	
	Dice1.roll(n);
	cout << "the average of the rolled numbers is:" << Dice1.average() << endl;




}