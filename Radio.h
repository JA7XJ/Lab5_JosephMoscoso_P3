#ifndef RADIO_H
#define RADIO_H

#include "Cancion.h"

#include<string>
using std::string;

#include<vector>
using std::vector;

class Radio{
  private:
    string nombre;
    string genero;
    vector<Cancion*> lista;
  public:
    Radio();
    ~Radio();
    Radio(string,string);
    string getNombre();
    void setNombre(string);
    string getGenero();
    void setGenero(string);
    void setList(vector <Cancion*>);
    void add(Cancion*);
};

#endif
