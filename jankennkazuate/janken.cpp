#include <iostream>
#include "game.h"
using namespace std;

enum Hand
{
	ROCK,
	SCISSORS,
	PAPER
};
static int Judge(int x,int y)
{

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