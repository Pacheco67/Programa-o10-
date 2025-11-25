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
	int matrizes1[5][3]{}, matrizes2[5][3]{}, soma;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Diga as suas matrizez: " << i << " e " << j << "\n";
			cin >> matrizes1[i][j];

		}
}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Diga as suas matrizez: " << i << " e " << j << "\n";
			cin >> matrizes2[i][j];
		}
		

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			soma = matrizes1[i][j] + matrizes2[i][j];
			cout << "a soma das matrizes é " << i << " e " << j << " é: " << soma << "\n";
		}
		
	}
	return 0;
}