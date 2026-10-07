#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int RandValue()
{
	return rand();
}

void Onemoregame(int & endSelection)
{
	endSelection = 2;
	for (;endSelection > 1;)
	{
		cout << "もう一回？" << endl << "0.もう一回！" << endl << "1.終わる";
		cin >> endSelection;

	}
}