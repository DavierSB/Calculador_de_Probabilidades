#include <suceso.h>
using namespace std;

Suceso::Suceso(string name, float probabilidad) : name(name)
{
    tabla[name] = probabilidad;
};
Suceso::Suceso(string name) : Suceso::Suceso(name, 1){};
Suceso::Suceso(string name, vector<pair<Suceso, int>> hijos, float probabilidad) : Suceso::Suceso(name, probabilidad)
{
    int total = 0;
    for(auto par : hijos)total += par.second;
    float frac = 1/total;
    for(auto par : hijos)
        for(auto x : par.first.tabla)
            tabla[x.first] += x.second*par.second*frac;
};
Suceso::Suceso(string name, vector<pair<Suceso, int>> hijos) : Suceso::Suceso(name, hijos, 1)
{};