#include <iostream>
#include"janken.h"
#include"kazuate.h"
using namespace std;

enum Mode
{
	MO_END_PROGRAM,//プログラムを終わる
	MO_JANKEN,	//じゃんけん
	MO_KAZUATE	//数当て
};

void SelectMode()
{
	int mode = 0;
	cout << "モードを選択" << endl << "1.じゃんけん" << endl << "2.数当てゲーム" << endl << "0.終了" << endl << ">";
	cin >> mode;

	switch (mode)
	{
	case MO_END_PROGRAM:
		cout << "プログラムを終了します" << endl;
		break;
	case MO_JANKEN:
		cout << "じゃんけんを開始" << endl;
		break;
	case MO_KAZUATE:
		cout << "数当てを開始" << endl;
		break;
	}

}

int main()
{
	SelectMode();

}
