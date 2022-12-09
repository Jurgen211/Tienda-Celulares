#include "Tienda1.h"

Tienda1::Tienda1() {
	Primero = NULL;
	Actual = NULL;
}

void Tienda1::InsertarInicio(Celular *C){
	Primero=new Nodo(C, Primero);
}

string Tienda1::toString(){
	Actual = Primero;
	stringstream l;
	while(Actual !=NULL){
		l<<Actual->toStringNodo();
		Actual = Actual-> getSig();
	}
	return l.str();
}
int Tienda1::CuentaNodos(){
	Actual=Primero;
	int Cantidad = 0;
	while(Actual != NULL){
		Cantidad++;
		Actual = Actual->getSig();
	}return Cantidad;
}
bool Tienda1::Vaciar(){
	return (Primero == NULL) ? true : false; 
	
}

bool Tienda1::eliminarInicio(){
	if(Primero==NULL){
		return false;
	}else{
		Actual = Primero;
		Primero = Primero-> getSig();
		delete Actual;
		return true;
	}}



Tienda1::~Tienda1() {
	while (!Vaciar()){
		{eliminarInicio(); }
	}
}
int Tienda1::Suma(){
	int Cont=0;
	
	Actual=Primero;
	while(Actual!=NULL){
		Cont+=Actual->getcelular()->getPrecio();
		Actual=Actual->getSig();
	}return Cont;
	
}
