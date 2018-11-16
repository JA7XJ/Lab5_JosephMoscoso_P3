#include "Radio.h"
#include "Cancion.h"

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

Radio::Radio(){
  nombre="";
  genero="";
}

Radio::~Radio(){
  cout<<"Listo"<<endl;
}

Radio::Radio(string nombre, string genero){
    this->nombre=nombre;
    this->genero=genero;
}

string Radio::getNombre(){
    return nombre;
}

void Radio::setNombre(string nombre){
    this->nombre=nombre;
}

string Radio::getGenero(){
    return genero;
}

void Radio::setGenero(string genero){
    this->genero=genero;
}

void Radio::setList(vector<Cancion*> lista){
   this->lista=lista;
}

void Radio::add(Cancion* c){
    lista.push_back(c);
}
