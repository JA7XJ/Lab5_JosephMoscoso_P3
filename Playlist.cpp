#include "Playlist.h"
#include "Cancion.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

Playlist::Playlist(){
  nombre="";
  descripcion="";
}

Playlist::~Playlist(){
  cout<<"Listo"<<endl;
}

Playlist::Playlist(string nombre, string descripcion){
    this->nombre=nombre;
    this->descripcion=descripcion;
}

string Playlist::getNombre(){
    return nombre;
}

void Playlist::setNombre(string nombre){
    this->nombre=nombre;
}

string Playlist::getDescripcion(){
    return descripcion;
}

void Playlist::setDescripcion(string descripcion){
    this->descripcion=descripcion;
}

void Playlist::setList(vector<Cancion*> lista){
   this->lista=lista;
}

void Playlist::add(Cancion* c){
    lista.push_back(c);
}
