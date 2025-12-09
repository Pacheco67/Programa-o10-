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

	string disciplinas[10] = { "Portugues","Ingles","Fisica","TLP","TIC","Matematica","ACS","Filosofia","Quimica","Ed.Fis." }; 
	string nomes[10] = { "Antonio","Anabela","Beatriz","Bernardo","Clara","Carlos","Diana","Diogo","Elisabete","Eurico" };
	int  i, ii,D ;
	float MA, MD, Soma ;
	
	for (i = 0; i < 10; ++i)
	{
		cout <<   disciplinas [i]<< ":\n";
		for (ii = 0; ii < 10; ++ii)
		{
			cout << "nota do " << nomes[ii]<< ": ";
			cin >> D;
		}
	}

	cout << endl;

	for (i = 0; i < 10; ++i)
	{
		Soma = 0;
		cout << "Média do " << nomes[i] << " aluno: ";
		for (ii = 0; ii < 10; ++ii)
		{
			Soma = Soma + D;
		}
		MA = Soma / 10;
		cout << MA << endl;
	}

	cout << endl;

	for (i = 0; i < 10; ++i)
	{
		Soma = 0;
		cout << "Média da " << disciplinas [i] << " disciplina";
		for (ii = 0; ii < 10; ++ii)
		{
			Soma = Soma + D;
		}
		MD = Soma / 10;
		cout << MD << endl;
	}

	return 0;
}
