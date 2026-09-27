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
static void ShowResult(Result result)
{

}


static void Judge(int playerHand,int cpuHand)
{
	Result result;
	//勝敗判定
	if (playerHand== cpuHand) result = DRAW;
	else if (playerHand == ROCK)
	{
		if (cpuHand== SCISSORS) result = WIN;
		else result = LOSS;
	}
	else if (playerHand == SCISSORS)
	{
		if (cpuHand== PAPER) result = WIN;
		else result = LOSS;
	}
	else if (playerHand == PAPER)
	{
		if(cpuHand== ROCK) result = WIN;
		else result = LOSS;
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