/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int N1,N2,N3;
    std::cout<<"Escrever numero";
    std::cin>>N1;
    std::cout<<"Escrver numero";
    std::cin>>N2;
    std::cout<<"Escrever numero";
    std::cin>>N3;
    if (N1>N2&& N1>N3)
    {
        std::cout<<"N1 é maior",
       } else if (N2>N3)
       {
           std::cout<<"N2 é maior",
       } else 
       {
    std::cout<<"N3 é maior";
}
    return 0;
}
