#include <iostream>
#include "game.h"
using namespace std;

enum Result
{
	WIN,
	LOSS,
	DRAW
};

enum Hand
{
	ROCK,
	SCISSORS,
	PAPER
};
static int Judge(int x,int y)
{
	if (x == ROCK)
	{
		if (y == SCISSORS) return WIN;
		if (y == PAPER) return LOSS;
		if (y == ROCK) return DRAW;

	}
	if (x == SCISSORS)
	{
		if (y == PAPER) return WIN;
		if (y == ROCK) return LOSS;
		if (y == SCISSORS) return DRAW;
	}
	if (x == PAPER)
	{
		if(y == ROCK) return WIN;
		if (y == SCISSORS) return LOSS;
		if (y == PAPER) return DRAW;
	}
}
static void Preparation()
{
	int playerHand, CPUHand;
	CPUHand = RandValue()%3;
	cout << "手をお決めください" << endl << "0.グー" << endl << "1.チョキ" << endl << "2.パー" << endl << ">";
	cin >> playerHand;
	Judge(playerHand, CPUHand);

}
void Janken()
{	
	Preparation();
	
}