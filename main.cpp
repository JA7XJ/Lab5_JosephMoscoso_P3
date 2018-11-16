#include "Cancion.h"
#include "Playlist.h"
#include "Artista.h"
#include "Radio.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main(){
  vector<Radio*> emi;
  vector<Cancion*> can;
  vector<Playlist*> rep;
  vector<Artista*> art;
  int on=1;
  while (on==1) {
    cout<<"Bienvenido"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"1)Crear artista\n2)Crear playlist\n3)Crear canciones\n4)Crear estacion de radio\n5)agregar a playlist\n6)Mostrar playlists\n7)Mostrar estaciones de radio\n8)Mostrar cancion y artista mas popular\n9)reproducir cancion\n10)Salir"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Por favor ingrese la opcion correspondiente: ";
    int op=0;
    cin>>op;
    cout<<"--------------------------------"<<endl;
    while (op<0||op>10) {
        cout<<"Error, ingrese de nuevo: ";
        cin>>op;
        cout<<"--------------------------------"<<endl;
    }
    if (op==1) {
      cout<<"Ingrese el nombre del artista: ";
      string nombre="";
      cin>>nombre;
      art.push_back(new Artista(nombre,0));
      cout<<"--------------------------------"<<endl;
      cout<<"Artista creado con exito"<<endl;
      cout<<"--------------------------------"<<endl;
    }
    if (op==2) {
      cout<<"Ingrese el nombre de la playlist: ";
      string nombre="";
      cin>>nombre;
      cout<<"Ingrese la descripcion: ";
      string descripcion="";
      cin>>descripcion;
      rep.push_back(new Playlist(nombre,descripcion));
      cout<<"--------------------------------"<<endl;
      cout<<"Playlist creada con exito"<<endl;
      cout<<"--------------------------------"<<endl;
    }
    if (op==3) {
      if (art.empty()) {
        cout<<"por favor agrege un artista por favor"<<endl;
      }else{
        /* code */
        cout<<"Ingrese el titulo: ";
        string titulo="";
        cin>>titulo;
        cout<<"Ingrese el genero: ";
        string genero="";
        cin>>genero;
        cout<<"Ingrese la duracion: ";
        int duracion=0;
        cin>>duracion;
        can.push_back(new Cancion(titulo,genero,duracion,0));
        for (int i = 0; i < art.size(); i++) {
            cout<<endl<<"Artista "<<i<<": "<<art[i]->getNombre()<<""<<endl;
        }
        cout<<"--------------------------------"<<endl;
        cout<<"Ingrese una posicion: ";
        int pos=0;
        cin>>pos;
        art[pos]->agregar(new Cancion(titulo,genero,duracion,0));
        cout<<"Cancion creada con exito"<<endl;
        cout<<"--------------------------------"<<endl;
      }
    }
    if (op==4) {
      cout<<"Ingrese el nombre: ";
      string nombre="";
      cin>>nombre;
      cout<<"Ingrese el genero: ";
      string genero="";
      cin>>genero;
      emi.push_back(new Radio(nombre, genero));
      for (int i = 0; i < can.size(); i++) {
          if (can[i]->getGenero()==genero) {
              emi[emi.size()-1]->add(can[i]);
          }
      }
      cout<<"--------------------------------"<<endl;
      cout<<"Radio creada con exito"<<endl;
      cout<<"--------------------------------"<<endl;
    }
    if (op==5) {
      if (rep.empty()) {
        cout<<"por favor cree una lista primero"<<endl;
      }else{
        for (int i = 0; i < can.size(); i++) {
            //if (can[i]->getGenero()==genero) {
              //  emi[emi.size()-1]->add(can[i]);
           cout<<i<<")"<<can[i]->getTitulo()<<""<<endl;
            //}
        }
        cout<<"Ingrese el indice(cancion): ";
        int pos1=0;
        cin>>pos1;
        for (int i = 0; i < rep.size(); i++) {
           cout<<i<<")"<<rep[i]->getNombre()<<""<<endl;
        }
        cout<<"Ingrese el indice: ";
        int poss=0;
        cin>>poss;
        rep[poss]->add(can[pos1]);
        cout<<"--------------------------------"<<endl;
        cout<<"Cancion agregada con exito"<<endl;
        cout<<"--------------------------------"<<endl;
      }
    }
    if (op==6) {
      cout<<"Playlists: "<<endl;
      for (int i = 0; i < rep.size(); i++) {
         cout<<i<<")"<<rep[i]->getNombre()<<""<<endl;
      }
      cout<<"----------------------------------"<<endl;
    }
    if (op==7) {
      cout<<"Emisoras: "<<endl;
      for (int i = 0; i < emi.size(); i++) {
         cout<<i<<")"<<emi[i]->getNombre()<<""<<endl;
      }
      cout<<"----------------------------------"<<endl;
    }
    if (op==8) {

    }
    if (op==9) {
      /* code */
    }
    if (op==10) {
      on=0;
    }
  }
  for (int i = 0; i < art.size(); i++) {
    if (art.empty()) {
    }else{
      delete art[i];
    }
  }
  for (int i = 0; i < emi.size(); i++) {
    if(emi.empty()){
    }else{
      delete emi[i];
    }
  }
  for (int i = 0; i < can.size(); i++) {
    if (can.empty()) {
      /* code */
    }else{
      delete can[i];
    }
  }
  for (int i = 0; i < rep.size(); i++) {
    if (rep.empty()) {
      /* code */
    }else{
      delete rep[i];
    }
  }
  return 0;
}
