#include <iostream>
#include <locale.h>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	char sair = 'n';
	string nomes[5] = {};
	string nomesfofos[5] = {};

	for (int i = 0; i < 5; i++)
	{
		cout << "Diz o nome de uma namorada";
			cin >> nomes[i];
	}
	cout << "\n\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Diz a alcunha da tua namorada " << nomes[i] << "\n";
		cin >> nomesfofos[i];
	}
	while (sair == 'n')
	{
		cout << "\n\nEscolhe o numero para saber o nome e alcunha da tua namorada: ";
		cin >> n;
		n = n - 1;

		if (n >= 0 && n < 5)
		{
			cout << "\nA tua namorada " << nomes[n] << " tem a alcunha " << nomesfofos[n];
		}
		else if (n > 5)
		{
			cout << "\nNiguem gosta de ti<..> ";

		}
		else
		{
			cout << "\nessa pessoa não existe>..<";
		}
		cout << "\n\ndeseja sair (s/n)";
		cin >> sair;

	}
}

