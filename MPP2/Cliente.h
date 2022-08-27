#pragma once
#include <string>
using namespace std;
class Cliente
{
private:
	string nombre;
	string apellido;
	string rut;
	int filaMesa;
	int columnaMesa;
	bool atendido = false;

public:

	Cliente(string nombre, string apellido, string rut, int filaMesa, int columnaMesa);
	Cliente(string nombre, string apellido, string rut);
	Cliente();

	~Cliente();

	string getNombreCliente();
	string getApellidoCliente();
	string getRut();
	int getFilaMesa();
	int getColumnaMesa();

	void setAtendido(bool antendido);

};
