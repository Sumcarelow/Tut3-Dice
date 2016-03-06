#include<iostream>

using namespace std;

#ifndef DICE_H
#define DICE_H
class Dice {
public:
	Dice();

	void roll(int);

	float average();  //average of outcomes

	float average(int, int);   

private:
	int newDiceRoll;
	int newDiceArray[100];
	int newRollNumber;

};


#endif