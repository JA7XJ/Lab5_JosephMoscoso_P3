#ifndef CANCION_H
#define CANCION_H

#include <string>
using std::string;

class Cancion{
  private:
    string titulo;
    string genero;
    int duracion;
    int veces;
  public:
    //constructor vacio
    Cancion();
    ~Cancion();
    //constructor sobrecargado
    Cancion(string,string,int,int);
    //getters y setters
    string getTitulo();
    void setTitulo(string);
    string getGenero();
    void setGenero(string);
    int getDuracion();
    void setDuracion(int);
    int getVeces();
    void setVeces(int);
    string toString();
};

#endif
