#include "PlayList.h"
#include "Cancion.h"

#include<vector>
using std::vector;

#include<string>
using std::string;

#include<iostream>
using std::cout;
using std::endl;

Playlist::PlayList(){
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

void Playlist::agregar(Cancion c){
    lista.push_back(c);
}
