#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string Disciplina[5] = { "portugues","matematica","Espanhol","Alem�o","TIC"};
	int N;
	cout << "Escolhe uma disciplina";
	cin >> N;
	if (N < 5);
		cout << "A Disciplina " << N << " � uma" << Disciplina[N];
		cout << "\n\nDejeija sair(s/n)n";
		cin << Sair;


	else
	{
		cout<<"\nN�o h� uma Disciplina"
	}

}