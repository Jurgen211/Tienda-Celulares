#include "Nodo.h"

Nodo::Nodo() {
	
}
Nodo::Nodo(Celular *C, Nodo *S){
	celular=C;
	Sig=S;
}

Nodo::~Nodo() {
	
}
void Nodo::setCelular(Celular *C) { 
	celular = C; 
}
Celular*  Nodo::getcelular() { 
	return celular; 
}
void Nodo::setSig(Nodo* s) { 
	Sig = s; 
}
Nodo* Nodo::getSig() {
	return Sig; 
}
string Nodo::toStringNodo(){
	return celular->toString();
}
