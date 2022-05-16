#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;

void Agendar();
void lista();
void Archivo();
void modificar();
void eliminar();
string nombre[100], tratamiento[100], hora[100], descripcion[100];
int agendar = -1;
float c_t[100], p_u[100], s_t[100], total[100], iva[100];

int main()
{
	int opcion;
	cout << "Bienvenido tista" << endl;

	cout << "1.  agendar una cita" << endl;
	cout << "2.  modificar una cita" << endl;
	cout << "3. eliminar una cita" << endl;
	cout << "4. mostrar la lista de citas vigentes" << endl;
	cout << "5.  limpiar la pantalla" << endl;
	cout << "6. salir" << endl;
	
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		Agendar();
		return main();
		break;

	case 2:
		modificar();
		return main();
		break;

	case 3:
		eliminar();
		return main();
		break;

	case 4:
		lista();
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		Archivo();
		break;

	
	default:
		cout << "opcion no valida" << endl;
		return main();
		break;
	}

}
void Agendar()
{
	int opcion = 1;
	do
	{
		system("CLS");
		agendar = agendar + 1;
		cin.ignore();
		cout << "Ingrese nombre" << endl;
		getline(cin, nombre[agendar]);;
		cout << "Ingrese hora" << endl;
		cin >> hora[agendar];
		cin.ignore();
		cout << "Ingrese tratamiento" << endl;
		getline(cin, tratamiento[agendar]);
		cin.ignore();
		cout << "Ingrese descripcion" << endl;
		getline(cin, descripcion[agendar]);
		cout << "ingresa el precio del tratamiento" << endl;
		cin >> p_u[agendar];
		cout << "ingresa la cantidad del tratamiento" << endl;
		cin >> c_t[agendar];
		s_t[agendar] = p_u[agendar] * c_t[agendar];
		cout << "el subtotal es de: " << s_t[agendar] << endl;
		iva[agendar] = s_t[agendar] * .16;
		cout << "con un iva de:" << iva[agendar] << endl;
		total[agendar] = iva[agendar] + s_t[agendar];
		cout << "el total es de:" << total[agendar] << endl;
		cout << "quiere agendar otra cita? presione 2, sino eliga 1" << endl;
		cin >> opcion;
	} while (opcion != 1);

}
void lista()
{
	system("CLS");
	for (int i = 0; i <= agendar; i++)
	{
		if (nombre[i].length() > 0)
		{
			cout << " " << endl;
			cout << "cita " << 1 + i << endl;
			cout << "nombre del paciente: " << nombre[0 + i] << endl;
			cout << "hora del tratamiento: " << hora[0 + i] << endl;
			cout << "nombre del tratamiento: " << tratamiento[0 + i] << endl;
			cout << "descripcion del tratamiento: " << descripcion[0 + i] << endl;
			cout << "precio unitario: " << p_u[0 + i] << endl;
			cout << "catidad del tratamiento: " << c_t[0 + i] << endl;
			cout << "sumando un subtotal de: " << s_t[0 + i] << endl;
			cout << "con iva : " << iva[0 + i] << endl;
			cout << "dando un total de: " << total[0 + i] << endl;
			cout << " " << endl;
		}

	}
}
void Archivo()
{
	ofstream archivo;
	float texto;
	string texto2;


	archivo.open("citas.txt", ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}
	for (int i = 0; i <= agendar; i++)
	{
		if (nombre[i].length() > 0)
		{
			archivo << " " << endl;
			archivo << "cita N." << i + 1 << endl;
			archivo << " " << endl;
			texto2 = nombre[i];
			archivo << "nombre: " << texto2 << endl;
			texto2 = hora[i];
			archivo << "hora: " << texto2 << endl;;
			texto2 = tratamiento[i];
			archivo << "tratamiento: " << texto2 << endl;
			texto2 = descripcion[i];
			archivo << "descripcion: " << texto2 << endl;
			texto = p_u[i];
			archivo << "precio unitario:" << texto << endl;
			texto = c_t[i];
			archivo << "catidad de tratamiento" << texto << endl;
			texto = s_t[i];
			archivo << "sumando un subtotal de: " << texto << endl;
			texto = iva[i];
			archivo << "con iva de: " << texto << endl;
			texto = total[i];
			archivo << "total" << texto << endl;
		}
	}
	archivo.close();
}
void modificar()
{
	system("CLS");
	int j, opcion, opcion2;
	cout << "ingrese el numero registro a modificar" << endl;
	cin >> j;
	j = j - 1;
	cout << "eliga la opcion que quiere modificar" << endl;
	cout << "1.- nombre" << endl;
	cout << "2.- hora" << endl;
	cout << "3.- tratramiento" << endl;
	cout << "4.- descripcion" << endl;
	cout << "5.- precio unitario del tratamiento" << endl;
	cout << "6.- cantidad de tratamiento" << endl;
	cin >> opcion;
	system("CLS");

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			cin.ignore();
			cout << "Ingrese nombre" << endl;
			getline(cin, nombre[i]);
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese hora" << endl;
			cin >> hora[i];
		}
		break;

	case 3:
		for (int i = j; i == j; i++)
		{
			cin.ignore();
			cout << "Ingrese tratamiento" << endl;
			getline(cin, tratamiento[i]);
			cout << "desea atualizar la descripcion?si es el caso ingrese 1" << endl;
			cin >> opcion2;
			if (opcion2 == 1)
			{
				cin.ignore();
				cout << "Ingrese descripcion" << endl;
				getline(cin, descripcion[i]);
			}
		}
		break;
	case 4:
		for (int i = j; i == j; i++)
		{
			cin.ignore();
			cout << "Ingrese descripcion" << endl;
			getline(cin, descripcion[i]);
		}
		break;
	case 5:
		for (int i = j; i == j; i++)
		{
			cout << "ingresa precio unitario del tratamiento" << endl;
			cin >> p_u[i];
			s_t[i] = p_u[i] * c_t[i];
			iva[i] = s_t[i] * .16;
			total[i] = s_t[i] + iva[i];
		}
		break;
	case 6:
		for (int i = j; i == j; i++)
		{
			cout << "ingresa la catidad del tratamiento" << endl;
			cin >> c_t[i];
			s_t[i] = p_u[i] * c_t[i];
			iva[i] = s_t[i] * .16;
			total[i] = s_t[i] + iva[i];
		}
		break;
	default:
		cout << "." << endl;
		break;
	}


}
void eliminar()
{
	system("CLS");
	int j, seguro, i;
	cout << "ingrese el  registro a eliminar" << endl;
	cin >> i;
	j = i - 1;

	cout << "cita " << 1 + i << endl;
	cout << "nombre del paciente: " << nombre[i] << endl;
	cout << "hora del tratamiento: " << hora[i] << endl;
	cout << "nombre del tratamiento: " << tratamiento[i] << endl;
	cout << "descripcion del tratamiento: " << descripcion[i] << endl;
	cout << "precio unitario: " << p_u[i] << endl;
	cout << "catidad del tratamiento: " << c_t[i] << endl;
	cout << "sumando un subtotal de: " << s_t[i] << endl;
	cout << "con iva de: " << iva[i] << endl;
	cout << "dando un total de: " << total[i] << endl;
	cout << " " << endl;
	cout << "ingrese 1 si esta seguro de eliminar esta cita" << endl;
	cin >> seguro;
	if (seguro == 1)
	{
		nombre[j] = ("");
		hora[j] = ("");
		tratamiento[j] = ("");
		descripcion[j] = ("");
		p_u[j] = p_u[j + 99];
		c_t[j] = c_t[j + 99];
		s_t[j] = s_t[j + 99];
		iva[j] = iva[j + 99];
		total[j] = total[j + 99];
	}
	else
	{
		cout << "." << endl;
	}
}

