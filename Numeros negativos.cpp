#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	float n;
	int r;
	int quantos = 0;
	float soma = 0;
	cout << "Da me 10 numeros positivos ou negativos";
	for (int i = 0; i < 10; i++)
	{
		cout << "Escolhe um n�mero ";
		cin >> n;
		if (n < 0)
		{
			quantos = quantos + 1;
			soma = soma + n;
		}
		{
			cout << "\n\n[0mQueres saber quantos n�meros negativo meteste (1) ou a soma deles (2) ";
			cin >> r;

			if (r == 1)
			{
				cout << "\nMeteste " << quantos << " [0mn�meros negativos\n";
			}
			else if (r == 2)
			{
				cout << "A soma dos n�meros negativos �" << soma << "\n";
			}
			else
			{
				cout << "[Escolhe entre 1 e 2\n";
			}

			return 0;
		}
	}
}