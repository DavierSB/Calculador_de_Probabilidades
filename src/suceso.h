#ifndef __SUCESO_H
#define __SUCESO_H

#include <string>
#include <vector>
#include <map>
using namespace std;

class Suceso 
{
   public:
      Suceso(string name, float probabilidad);
      Suceso(string name);
      Suceso(string name, vector<pair<Suceso, int>> hijos, float probabilidad);
      Suceso(string name, vector<pair<Suceso, int>> hijos);
      string name;
      map<string, float> tabla;
};

#endif