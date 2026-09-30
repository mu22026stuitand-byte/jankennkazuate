#include <iostream>
#include "game.h"
using namespace std;

static void InGame (unsigned int targetValue)
{
	unsigned int answer = RandValue()%targetValue;
	unsigned int predictedNumber = 0;
	for (unsigned int turn = 1;;turn++)
	{
		
		
		cout << "数を予想してね" << endl;
		cout << turn << "回目" << endl;
		cin >> predictedNumber;
		if ( answer == predictedNumber)
		{
			cout << predictedNumber << "正解" << endl << turn << "回目でクリア" << endl;
			break;
		}
		else if ( answer > predictedNumber)
		{
			cout << predictedNumber << "より多い" << endl;
		}
		else 
		{
			cout << predictedNumber << "より少ない" << endl;
		}
	}

}
static void Preparation()
{
	unsigned int targetValue = 1;
	cout << "数当て" << endl << "0から入力した数(上限2,147,483,647)から数字を抽選" << endl;
	cout << "0から～";
	cin >> targetValue;

	InGame(targetValue);

}
void Kazuate()
{
	for (;;)
	{
		Preparation();

		int endSelection = 2;
		for (;endSelection > 1;)
		{
			cout << "もっかい？" << endl << "0.もっかい！" << endl << "1.終わる" << endl;
			cin >> endSelection;

		}
		if (endSelection == 1)
		{
			break;
		}
	}
}