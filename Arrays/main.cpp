/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
string nomes[5]{};
char respostas;
do
{
    for(int i=0;i<5;i++)
{
    cout<<"Fala ai o"<<i+1<<"º nome";
    cin>>nomes[i];
    
}
for	(int i=4;i>=0;i--)
{
    cout<<nomes[i]<<endl;
}
cout<<"deseja sair?(S/N)";
cin>>respostas;
}while (respostas!='S');
return 0;}