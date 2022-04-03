#include <iostream>


using namespace std;

struct cita {

    int  horario, edad, p_ut, c_t, p_u;
    char nombre[100];
    char descripcion[70];
    char trat[55];
    char hora[30];
};


int main()
{

    cita Acita[3];
    int opcion;
    int menu = 1;
    int j;
    int i;


    do {

        cout << " ***cita dentales *** " << endl;
        cout << "1. agendar cita" << endl;
        cout << "2. modifiar cita" << endl;
        cout << "3. elimintar cita" << endl;
        cout << "4. lista de citas vigentes" << endl;
        cout << "5. limpiar pantalla" << endl;
        cout << "6. salir" << endl;
        cin >> opcion;

        switch (opcion) {

        case 1:

            cout << "***agendar citas***" << endl;
         

            for (int i = 0; i < 3; i++) {

               

                cout << "ID del paciente: " << i + 1 << endl;


                cout << "Nombre del Paciente: " << endl;
                cin >> Acita[i].nombre;
                cout << "edad del paciente: " << endl;
                cin >> Acita[i].edad;
                cout << "hora del tratamiento, ***formato 24 horas***" << endl;
                cin >> Acita[i].hora;
                cout << "nombre del tratamiento" << endl;
                cin >> Acita[i].trat;
                cout << "descripcion" << endl;
                cin >> Acita[i].descripcion;
                cout << "precio unitario tratamiento" << endl;
                cin >> Acita[i].p_ut;
                cout << "cantidad del tratamiento" << endl;
                cin >> Acita[i].c_t;
                cout << "precio unitario" << endl;
                cin >> Acita[i].p_u;




                cout << "su citas han a sido generada" << endl;
            }


            break;


        case 2:
            cout << "*** modificar cita ***" << endl;

            cout << "ingrese la cita que desea modificar" << endl;
            cin >> j;

            j = j - 1;

            for (i = j; i <= j; i++) {

                cout << "cita: " << i << endl;
                cout << "Nombre del Paciente: " << endl;
                cin >> Acita[i].nombre;
                cout << "edad del paciente: " << endl;
                cin >> Acita[i].edad;
                cout << "hora del tratamiento, ***formato 24 horas***" << endl;
                cin >> Acita[i].hora;
                cout << "nombre del tratamiento" << endl;
                cin >> Acita[i].trat;
                cout << "descripcion" << endl;
                cin >> Acita[i].descripcion;
                cout << "precio unitario tratamiento" << endl;
                cin >> Acita[i].descripcion;
                cout << "cantidad del tratamiento" << endl;
                cin >> Acita[i].c_t;
                cout << "precio unitario" << endl;
                cin >> Acita[i].p_u;

            }


            break;

        case 3:

            break;

        case 4:
            cout << "***citas vigentes***" << endl;

            for (i = 0; i < 3; i++) {

                cout << "el ID de alta es: " << endl;
                cout << Acita[i].nombre << "\n";

                cout << Acita[i].edad << "\n";

                cout << Acita[i].hora << "\n";

                cout << Acita[i].trat << "\n";

                cout << Acita[i].descripcion << "\n";

                cout << Acita[i].descripcion << "\n";

                cout << Acita[i].c_t << "\n";

                cout << Acita[i].p_u << "\n";

            }

            break;

        case 5:
            break;


        case 6:

            exit(EXIT_SUCCESS);
            break;


        default:  cout << "opcion no valida" << endl;

        }

        if (opcion != 0) {
            cout << "elgia 1 si quiere volver al menu, eliga 2 si quiere salir" << endl;
            cin >> menu;
        }

    } while (menu == 1);

}
