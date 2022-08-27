// MPP2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> // sacar
#include "MPP.h" // sacar
#include <string>// sacar
#include "Cliente.h"


using namespace std;

int main()
{
    Cliente* cliente1 = new Cliente("1", "1", "1", 1, 1);// fila columna
    Cliente* ZERO = new Cliente("0", "0", "0");
 
    mpp* MPP = new mpp(20, 15);
    MPP->imprimir();



    /* esto llena toda la matriz





    for (int i = 1; i <= 15; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            MPP->agregar(*cliente1, i, j);
        }
    }




    */


    int x = 1;
    int y = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            MPP->agregar(*ZERO, x , y );
            MPP->agregar(*ZERO, x+1 , y+1);
            y = y + 3;
        }
        x = x + 3;
        y = 1;
    }





    /*
    MPP->agregar(*cliente1, cliente1->getFilaMesa() , cliente1->getColumnaMesa());

    MPP->agregar(*cliente2, cliente2->getFilaMesa(), cliente2->getColumnaMesa());

    MPP->agregar(*cliente3, cliente3->getFilaMesa(), cliente3->getColumnaMesa());

    MPP->agregar(*cliente4, cliente4->getFilaMesa(), cliente4->getColumnaMesa());
    */

    cout << "";
    MPP->imprimir();
}

/*
DO TASKS (coloquemos aca las cosas que devemos hacer que tengamos indentificado)

 x EL DIAGRAMA DE CLASES
 - CREAR LAS CLASES DE LOS OBJETOS
 X LEER LOS ARCHIVOS
 - CREAR LOS OBJETOS DESDE LOS ARCHIVOS
 - ALMACENAR LOS OBJETOS ES STACK O QUEUE
 - LA LOGICA DE ATENDER (no se lo que se nesesita para esto)
 - LA LOGICA DE LAS ESTADISTICAS (no se lo que se nesesita para esto)



 LOGRADO (colocaremos aca las cosas que emos logrado hacer)

 - INTERFAS DEL MENU (CLASES SISTEMAS)
 - AÑADI LOS TXT CON LA INFO
 -

*/