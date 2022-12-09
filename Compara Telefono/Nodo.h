#ifndef NODO_H
#define NODO_H
#include "Celular.h"

class Nodo {
public:
	Nodo();
	Nodo(Celular *C,Nodo *S);
	~Nodo();
	void setCelular(Celular*);
	Celular* getcelular();
	void setSig(Nodo*);
	Nodo* getSig();
	string toStringNodo();
private:
	Celular *celular;
	Nodo *Sig;
};

#endif

