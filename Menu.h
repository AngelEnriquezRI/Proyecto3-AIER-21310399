#pragma once
#pragma once
#include "Add.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Menu : public Add
{

	public:
		Menu(){}
		~Menu(){}

		Menu(string _tarea) : Add(_tarea) {}

		void carta()
		{
			int opcion = 0;
			ptrPila p = NULL; 
			string dato;
			string  x; //con esta variable se devuelve el metodo para borrar

			while (opcion != 4)
			{
				cout << "\tPor favor elija una de nuestras siguientes opciones:\n" <<endl;
				cout << "1.Agregar un Actividad a realizar" <<endl;
				cout << "2.Eliminar una de las actividades" <<endl;
				cout << "3.Mostrar tareas pendientes" <<endl;
				cout << "4. Salir" <<endl;
				cin >> opcion;


				switch (opcion)
				{


				case 1:
					cout << "\t\t\n\nEscriba la tarea a ingresar" <<endl;
					cout << "\t\t\n\nNota: Tiene que ser una palabra sin espacios" <<endl;
					cin >> dato;
					Insertar(p, dato);
					cout << " Tarea  " << dato << " Agregada, puedes comprobar en la opcion 3\n\n" <<endl;
					break;
				case 2:
					x = Borrar(p);
					cout << "\t\t\n\nTarea  " << x << "  eliminada con exito\n\n" <<endl;
					break;
				case 3:
					cout << "\t\t\n\nMostrando tareas pendientes\n\n" <<endl;
					if (p != NULL)
						Listar_pila(p);
					else
						cout << "\n\nNo hay elementos en la lista" <<endl;
					break;

				case 4:
					cout << "\t\t\n\nGracias por utilizar nuestro programa" <<endl;
					break;

				default: cout << "\t\t\n\nError, opcion no valida" <<endl;
				}
			}
		}

};