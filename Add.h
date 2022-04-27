#pragma once
#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Add
{
private:

	//Este es el nodo
	string tarea;
	class Add *next;

public:

	Add(){}
	Add(string _tarea)
	{
		tarea = _tarea;
	}
	~Add(){}

    typedef Add *ptrPila;

    
    //Insertar elementos en la pila
    void Insertar(ptrPila &p, string escribe)
    {
        ptrPila aux;
        aux = new (class Add); //Apuntando al  nuevo nodo
        aux->tarea = escribe;
        aux->next = p;
        p = aux;
    }

    //Borrar elementos en la pila
    string Borrar(ptrPila &p)
    {
        string tarea;
        ptrPila aux;

        aux = p;
        tarea = aux->tarea;

        p = aux->next;
        delete(aux);

        return tarea;
    }

	//Aqui se muestran los elementos de la lista
    void Listar_pila(ptrPila p)
    {
        ptrPila aux;
        aux = p;

        while(aux != NULL)
        {
            cout << "\t" << aux->tarea << endl;
            aux = aux->next;
        }

    }
};