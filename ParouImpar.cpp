#include <iostream>
#include <locale.h>
using namespace std;

int main()
{


	setlocale(LC_ALL, "Portuguese");
int num = 28;
while (num != 0)
{
	cout<< "Diz um numero \n";
	cin >> num;
	if (num % 2 == 0)
	{
	cout << "� par\n";
}
else
{
	cout << "�mpar\n";
}
}
cout << "Caregaste no zero, saiste";
}