#include<iostream>

using namespace std;

#ifndef DICE_H
#define DICE_H
class Dice {
public:
	Dice();

	void roll(int, int);

	float average(int Array[], int);

	float average(int, int);

private:
	int newDiceRoll;
	int newDiceArray[100];
	int newRollNumber;

};


#endif