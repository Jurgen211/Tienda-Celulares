#include "Celular.h"

Celular::Celular(){
	Nombre="";
	Precio=0;
}
Celular::Celular(string Nombre,int Precio){
	this->Nombre=Nombre;
	this->Precio=Precio;
	
}
Celular::~Celular(){
	
}
void Celular::setNombre(string Nombre){
	this->Nombre=Nombre;
}
void Celular::setPrecio(int Precio){
	this->Precio=Precio;
}

string Celular::getNombre(){
	return Nombre;
}

int Celular::getPrecio(){
	return Precio;
}

string Celular::toString(){
	stringstream x;
	x<<"Nombre: "<<getNombre()<<endl;;
	x<<"Precio: "<<getPrecio()<<endl;
	x<<endl;
	return x.str();
}

Celular * Celular::Leer(ifstream& estFile){
	
	string Nombre;
	int Precio;
	
	if (!(estFile >> Nombre)) { return NULL; }
	if (!(estFile >> Precio)) { return NULL; }
	return new Celular(Nombre, Precio);
}


