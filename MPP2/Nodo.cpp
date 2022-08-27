#include "Nodo.h"
Cliente* vacio = new Cliente();

Nodo::Nodo() // nodos cabeceras
{
	this->cliente = *vacio;
	this->fila = 0;
	this->columna = 0;
	this->left = this;
	this->up = this;
}

Nodo::Nodo(Cliente cliente, int fila, int columna)
{

	this->cliente = cliente;
	this->fila = fila;
	this->columna = columna;
	this->left = nullptr;
	this->up = nullptr;

}


Nodo* Nodo::getLeft()
{
	return this->left;
}

Nodo* Nodo::getUp()
{
	return this->up;
}

int Nodo::getFila()
{
	return this->fila;
}

int Nodo::getColumna()
{
	return this->columna;
}

Cliente Nodo::getCliente()
{
	return this->cliente;
}


void Nodo::setLeft(Nodo* nodo)
{
	this->left = nodo;
}

void Nodo::setUp(Nodo* nodo)
{
	this->up = nodo;
}

void Nodo::setFila(int fila)
{
	this->fila = fila;
}

void Nodo::setColumna(int columna)
{
	this->columna = columna;
}


void Nodo::setCliente(Cliente cliente)
{
	this->cliente = cliente;
}

Nodo::~Nodo()
{
}
