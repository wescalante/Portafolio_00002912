////////////Librerias///////////
#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include<stdlib.h>
#include<time.h>
#include<fstream>
///////////////////////////////

using namespace std;
using namespace cv;

struct pais {
	string nombre[5];
	string capital[5];
	int habitantes[5];
	int edadavg[5];
};

int main(){

	struct pais continente[5];
	bool haydatos = false;
	int opc, opc2,opc3;

	menu:
	if (haydatos==false)
	{
		cout << "Seleccione la accion que desea realizar:" << endl << endl;
		cout << "1. Ingresar datos" << endl<<endl;
		cout << "Opcion seleccionada: ";

		cin >> opc;
	}
	else if (haydatos==true)
	{
		cout << "Seleccione la accion que desea realizar:" << endl << endl;
		cout << "1. Ingresar datos" << endl;
		cout << "2. Calcular poblacion de un continente" << endl;
		cout << "3. Encontar capital con mayor poblacion" << endl;
		cout << "4. Calcular el promedio de edad mundial" << endl<<endl;
		cout << "Opcion seleccionada: ";

		cin >> opc;
	}
	

	if (opc == 1) {
		for (int i = 0; i <= 4; i++) {
			for (int j = 0; j <= 4; j++) {
				cout << "Ingrese el nombre del pais " << j+1 << " del continente " << i+1 << endl;
				cin >> continente[i].nombre[j];

				cout << "Ingrese la capital del pais " << j+1 << " del continente " << i+1 << endl;
				cin >> continente[i].capital[j];

				cout << "Ingrese el numero de habitantes del pais " << j+1 << " del continente " << i+1 << endl;
				cin >> continente[i].habitantes[j];

				cout << "Ingrese la edad promedio de los habitantes del pais " << j+1 << " del continente " << i+1 << endl;
				cin >> continente[i].edadavg[j];
			}
		}
		haydatos = true;
		system("CLS");
		goto menu;
	}

	else if (opc==2){
		cout << "Seleccione el continente para calcular su poblacion total:" << endl << endl;
		cout << "1. Continente 1" << endl;
		cout << "2. Continente 2" << endl;
		cout << "3. Continente 3" << endl;
		cout << "4. Continente 4" << endl;
		cout << "5. Continente 5" << endl << endl;
		cout << "Opcion seleccionada: ";

		cin >> opc2;

		int acum = 0;

		if (opc2==1)
		{
			for (int i = 0; i <= 4; i++) {
				acum = acum + continente[opc2 - 1].habitantes[i];
			}
			
		}
		else if (opc2 == 2)
		{
			for (int i = 0; i <= 4; i++) {
				acum = acum + continente[opc2 - 1].habitantes[i];
			}
		}
		else if(opc2 == 3)
		{
			for (int i = 0; i <= 4; i++) {
				acum = acum + continente[opc2 - 1].habitantes[i];
			}
		}
		else if (opc2 == 4)
		{
			for (int i = 0; i <= 4; i++) {
				acum = acum + continente[opc2 - 1].habitantes[i];
			}
		}
		else if (opc2 == 5)
		{
			for (int i = 0; i <= 4; i++) {
				acum = acum + continente[opc2 - 1].habitantes[i];
			}
		}

		cout << "La poblacion total del continente " << opc2 << " es: " << acum << " habitantes";
	}
	else if (opc==3)

	{
		int maxpob;
		int ii=0, jj=0;
		maxpob = continente[0].habitantes[0];
		for (int i = 0; i <= 4; i++) {
			for (int j = 0; j <= 4; j++) {
				if (continente[i].habitantes[j] > maxpob) {
					maxpob = continente[i].habitantes[j];
					ii = i;
					jj = j;
				}
				
			}
		}
		cout << "La capital con mayor poblacion es: " << continente[ii].capital[jj] << " con " << maxpob << " habitantes" << endl;
	}
	else if (opc == 4)
	{
		int sumedad=0;
		double avgedad;
		for (int i = 0; i <= 4; i++) {
			for (int j = 0; j <= 4; j++) {
				sumedad = sumedad + continente[i].edadavg[j];
				}

			}
		avgedad = sumedad / 25;
		cout << "La edad promedio mundial es " << avgedad << " años" << endl;
		}

	cout << endl<<endl<<"Seleccione la accion que desea realizar:" << endl << endl;
	cout << "1. Regresar al menu principal" << endl;
	cout << "2. Salir" << endl<<endl;
	cout << "Opcion seleccionada: ";
	cin >> opc3;

	if (opc3 == 1) {
		system("CLS");
		goto menu;
	}

	getchar();
	return 0;
	}
	


	