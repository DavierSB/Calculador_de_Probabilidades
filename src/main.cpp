#include<iostream>
#include "suceso.h"
Suceso Problema()
{
    //Write your problem in here
    Suceso A("siempre", 1);
    return A;
}
int main()
{
    for (auto par : Problema().tabla)
        std::cout<<par.first<< "  "<<par.second<<'\n';
}
