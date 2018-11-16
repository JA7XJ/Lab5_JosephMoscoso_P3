#include "Cancion.h"

#include<string>
using std::string;

#include<vector>
using std::vector;

class Artista{
  private:
    string nombre;
    int veces;
    vector<Cancion>* lista;
  public:
    Artista();
    ~Artista();
    Artista(string, int);
    string getNombre();
    void setNombre(string);
    int getVeces();
    void setVeces(int);
    void agregar();
};

#endif
