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
static void ShowResult(Result result, int playerHand, int cpuHand)
{
	const char* str[] = { "グー","チョキ","パー"};
	cout << endl<<"今回の手"<<endl;
	cout << "あなた" <<" "<<str[playerHand];
	cout << "CPU" << " " << str[cpuHand] << endl;
	cout << "今回の結果は" ;
	if (result == WIN)
	{
		cout << "あなたの勝ち" << endl;
	}
	else if (result == LOSS)
	{
		cout << "CPUの勝ち" << endl;
	}
	else
	{
		cout << "引き分け" << endl;
	}
	
}

static void Judge(int playerHand,int cpuHand)
{
	Result result = WIN;
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
	ShowResult(result, playerHand, cpuHand);

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
	int endSelection =2;
	do
	{
		Preparation();

		OneMoreGame(endSelection);
		
	} while (endSelection != 1);
	
	
}