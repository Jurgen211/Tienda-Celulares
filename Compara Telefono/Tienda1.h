#ifndef TIENDA1_H
#define TIENDA1_H
#include "Nodo.h"
class Tienda1 {
public:
	Tienda1();
	~Tienda1();
	
	void InsertarInicio(Celular *C);
	bool eliminarInicio();
	string toString();
	int CuentaNodos();
	bool Vaciar();
	int Suma();
	
private:
	Nodo *Primero;
	Nodo *Actual;
	Celular Cel;
};

#endif

