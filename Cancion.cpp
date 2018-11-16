#include "Cancion.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

Cancion::~Cancion(){
  cout<<"Liberado"<<endl;
}

Cancion::Cancion(){
  titulo="";
  genero="";
  duracion=0;
  veces=0;
}

Cancion::Cancion(string titulo, string genero, int duracion, int veces){
  this->titulo=titulo;
  this->genero=genero;
  this->duracion=duracion;
  this->veces=veces;
}

string Cancion::getTitulo(){
    return titulo;
}

void Cancion::setTitulo(string titulo){
    this->titulo=titulo;
}

string Cancion::getGenero(){
    return genero;
}

void Cancion::setGenero(string genero){
    this->genero=genero;
}

int Cancion::getDuracion(){
    return duracion;
}

void Cancion::setDuracion(int duracion){
    this->duracion=duracion;
}

int Cancion::getVeces(){
    return veces;
}

void Cancion::setVeces(int veces){
    this->veces=veces;
}

/*string Cancion::toString(){
    return "Cancion"<<titulo;
}*/
