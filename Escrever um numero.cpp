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
