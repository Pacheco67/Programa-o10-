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
	float potencias, expoente;
	cout << "Da me um expoente";
	cin >> expoente;
	cout << "da me uma potencia";
	cin >> potencias;


	cout << pow(expoente, potencias);

	

















	return 0;
}