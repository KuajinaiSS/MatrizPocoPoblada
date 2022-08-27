#pragma once
#include "Cliente.h"

class Nodo
{
private:
	Nodo* left;
	Nodo* up;
	int fila;
	int columna;


	Cliente cliente;

public:
	Nodo();

	Nodo(Cliente cliente, int fila, int columna);

	Nodo* getLeft();
	Nodo* getUp();
	int getFila();
	int getColumna();


	Cliente getCliente();

	void setLeft(Nodo* nodo);
	void setUp(Nodo* nodo);
	void setFila(int fila);
	void setColumna(int columna);


	void setCliente(Cliente cliente);


	~Nodo();
};

