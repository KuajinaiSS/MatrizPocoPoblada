#include "MPP.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

mpp::mpp()
{
}

mpp::mpp(int ancho, int largo) // nodos cabecera
{
	this->ancho = ancho;
	this->largo = largo;

	this->ACOL = new Nodo[ancho + 1];
	this->AROW = new Nodo[largo + 1];
}

void mpp::agregar(Cliente cliente, int fila, int columna)
{
	// creamos el nodo
	Nodo* nodo = new Nodo(cliente,fila,columna);


	// cambiando SUS referencias left
	Nodo* aux = &AROW[fila]; // el auxiliar
	while (aux->getLeft()->getColumna() > 0 && aux->getLeft()->getColumna() > columna) { // la primera condicion si es 0 estamos en el nodo cabecera y el segundo lo mismo pero con la columna
		aux = aux->getLeft();
	}
	nodo->setLeft(aux->getLeft());
	aux->setLeft(nodo);



	 // cambiando sus referencias up
	Nodo* aux2 = &ACOL[columna]; // el auxiliar de aseo
	while (aux2->getUp()->getFila() > 0 && aux2->getUp()->getFila() > fila) {
		aux2 = aux2->getUp();
	}
	nodo->setUp(aux2->getUp());
	aux2->setUp(nodo);

	return;
}





void mpp::imprimir() // ver como es que imprime xd
{
	cout << "" << "Matriz" << "" << ':' << endl;
	for (int i = 1; i <= largo; i++)
	{
		string fila;
		Nodo* aux = AROW[i].getLeft();
		int espaciosVacios = ancho - aux->getColumna();

		while (true) {
			for (int j = 0; j < (espaciosVacios); j++) {
				fila = ". " +fila;
			}

			if (aux->getColumna() == 0) break;

			stringstream s;

			s << aux->getCliente().getApellidoCliente() << " ";
			fila = s.str() + fila;
			espaciosVacios = aux->getColumna() - aux->getLeft()->getColumna() - 1;
			aux = aux->getLeft();
		}
		cout << fila << endl;
	}
}








mpp::~mpp()
{
}
