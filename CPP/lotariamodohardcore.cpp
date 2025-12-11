#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int NUM[5], ESCOLHE[5], Troca, AUX, Certos = 0;


	for (int i = 0; i < 5; i++)
	{
		NUM[i] = (rand() % 50) + 1;
		for (int ii = 0; ii < 5; ii++)
		{
			while (NUM[i] == NUM[ii])
			{
				NUM[i] = (rand() % 50) + 1;
			}
		}
	}

	do
	{
		Troca = 0;
		for (int i = 0; i < 4; i++)
		{
			if (NUM[i] > NUM[i + 1])
			{
				Troca++;
				AUX = NUM[i];
				NUM[i] = NUM[i + 1];
				NUM[i + 1] = AUX;
			}
		}

	} while (Troca != 0);


	for (int i = 0; i < 5; i++)
	{
		cout << "Escolhe um número entre 1 e 50: ";
		cin >> ESCOLHE[i];
		while (ESCOLHE[i] < 1 || ESCOLHE[i] > 50)











































	return 0;
}

