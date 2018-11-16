#include "Artista.h"
#include "Cancion.h"

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

Artista::Artista(){
  nombre="";
  veces=0;
}

Artista::~Artista(){
  cout<<"Listo"<<endl;
}

Artista::Artista(string nombre, int veces){
  this->nombre=nombre;
  this->veces=veces;
}

string Artista::getNombre(){
    return nombre;
}

void Artista::setNombre(string nombre){
    this->nombre=nombre;
}

int Artista::getVeces(){
    return veces;
}

void Artista::setVeces(int veces){
    this->veces=veces;
}

/*Cancion Artista::getLista(){
    return lista;
}*/
void Artista::setList(vector<Cancion*> lista){
   this->lista=lista;
}

void Artista::agregar(Cancion* c){
    lista.push_back(c);
}
