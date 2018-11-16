#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Cancion.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

class Playlist{
  private:
    string nombre;
    string descripcion;
    vector<Cancion*> lista;
  public:
    Playlist();
    ~Playlist();
    Playlist(string,string);
    string getNombre();
    void setNombre(string);
    string getDescripcion();
    void setDescripcion(string);
    void setList(vector <Cancion*>);
    void add(Cancion*);
};

#endif
