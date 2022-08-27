#pragma once
#include "Nodo.h"

class mpp
{
private:
	int ancho; // nuemro de columnas
	int largo; // numero de filas

	Nodo* ACOL;
	Nodo* AROW;

public:
	mpp();
	mpp(int ancho, int largo);

	void agregar(Cliente valor, int fila, int columna);
	void imprimir();



	~mpp();

};

