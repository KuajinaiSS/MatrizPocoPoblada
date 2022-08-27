#include "Cliente.h"

Cliente::Cliente(string nombre, string apellido, string rut, int filaMesa, int columnaMesa)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->rut = rut;
    this->filaMesa = filaMesa;
    this->columnaMesa = columnaMesa;
}

Cliente::Cliente(string nombre, string apellido, string rut)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->rut = rut;
}

Cliente::Cliente()
{
}


Cliente::~Cliente()// destructor
{
}


string Cliente::getNombreCliente()
{
    return this->nombre;
}

string Cliente::getApellidoCliente()
{
    return this->apellido;
}


string Cliente::getRut()
{
    return this->rut;
}

int Cliente::getFilaMesa()
{
    return this->filaMesa;
}

int Cliente::getColumnaMesa()
{
    return this->columnaMesa;
}

void Cliente::setAtendido(bool atendido)
{
    this->atendido = atendido;
}