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
	int N = rand() % 100;
	int r = -1, tentativas = 0;

do{
	cout << "Pedir um numero";
	cin >> r;


	if (r < N) {
		cout << "O número e maior\n";
	}
	if (r > N) {
		cout << "O número e menor\n";
	}
}  while (r != N);


	;
	
		cout << "Diga um número\n";
		cin >> tentativas;
		if (tentativas < 6) {
			cout << "\n muito  bem,acertate só em"<<tentativas<<"tentativas.Es o rei ";
		}
		if (tentativas > 11) {
			cout << "\n muito bem ,acertastesem"<<tentativas<<"parabens";
		}
	
	cout << "\n acertaste mas demoraste mais do que uma tartaruga es mesmo boooneco";

	return 0;
}