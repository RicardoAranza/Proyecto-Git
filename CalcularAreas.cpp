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
        cout << "4. Calcular el area de un rectángulo" << endl;
        cout << "5. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        
        //Aquí iniciará el switch
        
        
         case 3: // Área de un círculo
                double radio;
                cout << "Ingrese el radio del círculo: ";
                cin >> radio;
                cout << "El área del círculo es: " << M_PI * pow(radio, 2) << endl;
                break;

        //WAWAWAWAWAWAWAWAWAWA LA WEA FOMEEEEEEEE
        
         default:
                cout << "Opción no válida. Por favor, elija una opción válida." << endl;
                break;
        system("cls");
    } while (opcion != 5);

    return 0;
}
