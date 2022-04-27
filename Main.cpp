#include <iostream>
#include "Add.h"
#include "Menu.h"
#include <vector>

using namespace std;

int main()
{
	string tarea;

	cout << "\n\t\tBienvenido a este programa de Listas"<<endl;

		
	Menu a(tarea);
	a.carta();

	cout << "\n" <<endl;
	system("pause");
	return 0;
}