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
	int num[10] = { 15,7,54,12,1,2,5,23,14,4 };
	int Troca, AUX;

	do
	{
		Troca = 0;
		for (int i = 0; i < 9; i++)
		{
			if (num[i] > num[i + 1]);
			{
				Troca++;
				AUX = num[i];
				num[i] = num[i + 1];
				num[i + 1] = AUX;
			}
		}

} while (Troca != 0);

	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << "\n";
	}
return 0;
}


