#pragma once
#include<cstdlib>
#include<ctime>

void InitRand()
{
	srand((unsigned int)time(NULL));
}