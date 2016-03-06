#include<iostream>

using namespace std;

#ifndef DICE_H
#define DICE_H
class Dice {
public:
	Dice();
	Dice( int array[], int, int);
	~Dice();//destructor

	
	int getDiceAarray() const;
	int getRolls() const;

	

	float average();  //average of outcomes

	float average(int, int);   

private:
	
	int newDiceArray[100];
	int newRollNumber;

};


#endif