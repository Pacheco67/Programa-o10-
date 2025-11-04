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
	int N, M, media;
	cin >> N;
	cin >> M;
	media = N / M;

	cout << media << endl;

















	return 0;
}