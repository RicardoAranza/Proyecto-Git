#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    int opcion;
    do {
        cout << "Calculadora de Areas" << endl;
        cout << "1. Calcular el area de un cuadrado" << endl;
        cout << "2. Calcular el area de un triangulo" << endl;
        cout << "3. Calcular el area de un circulo" << endl;
        cout << "4. Calcular el area de un rect�ngulo" << endl;
        cout << "5. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        
        //Aqu� iniciar� el switch
        
        
         case 3: // �rea de un c�rculo
                double radio;
                cout << "Ingrese el radio del c�rculo: ";
                cin >> radio;
                cout << "El �rea del c�rculo es: " << M_PI * pow(radio, 2) << endl;
                break;

        //WAWAWAWAWAWAWAWAWAWA LA WEA FOMEEEEEEEE
        
         default:
                cout << "Opci�n no v�lida. Por favor, elija una opci�n v�lida." << endl;
                break;
        system("cls");
    } while (opcion != 5);

    return 0;
}
