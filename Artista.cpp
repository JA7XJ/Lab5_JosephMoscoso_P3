#include "Artista.h"
#include "Cancion.h"

#include<iostream>
using std::cout;
using std::endl;

#include<vector>
using std::vector;

#include<string>
using std::string;

Artista::Artista(){
  nombre="";
  veces=0;
}

Artista::~Artista(){
  cout<<"Listo"<<endl;
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

void Playlist::agregar(Cancion c){
    lista.push_back(c);
}
