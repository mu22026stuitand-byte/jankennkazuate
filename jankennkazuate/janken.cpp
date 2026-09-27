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
static void ShowResult()
{

}


static void Judge(int playerHand,int cpuHand)
{
	int result;
	//勝敗判定
	if (playerHand == ROCK)
	{
		if (cpuHand== SCISSORS) result = WIN;
		else if (cpuHand== PAPER) result = LOSS;
		else if (cpuHand== ROCK) result = DRAW;

	}
	else if (playerHand == SCISSORS)
	{
		if (cpuHand== PAPER) result = WIN;
		else if (cpuHand== ROCK) result = LOSS;
		else if (cpuHand== SCISSORS) result = DRAW;
	}
	else if (playerHand == PAPER)
	{
		if(cpuHand== ROCK) result = WIN;
		else if (cpuHand== SCISSORS) result = LOSS;
		else if (cpuHand== PAPER) result = DRAW;
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
	//Preparation();
	cout << "a";
	
}