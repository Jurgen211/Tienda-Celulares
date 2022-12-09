#ifndef CELULAR_H
#define CELULAR_H
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Celular {
public:
	Celular();
	Celular(string Nombre,int Precio);
	void setNombre(string Nombre);
	void setPrecio(int Precio);
	string getNombre();
	int getPrecio();
	string toString();
	
	static Celular * Leer(ifstream&);
	~Celular();
private:
	string Nombre;
	int Precio=0;
};

#endif

