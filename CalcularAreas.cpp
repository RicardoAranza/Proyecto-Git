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
        
        case 2: // �rea de un tri�ngulo
                double base, altura;
                cout << "Ingrese la base del tri�ngulo: ";
                cin >> base;
                cout << "Ingrese la altura del tri�ngulo: ";
                cin >> altura;
                cout << "El �rea del tri�ngulo es: " << 0.5 * base * altura << endl;
                break;

         case 3: // �rea de un c�rculo
                double radio;
                cout << "Ingrese el radio del c�rculo: ";
                cin >> radio;
                cout << "El �rea del c�rculo es: " << M_PI * pow(radio, 2) << endl;
                break;

case 4: // �rea de un rect�ngulo
                double baseRect, alturaRect;
                cout << "Ingrese la base del rect�ngulo: ";
                cin >> baseRect;
                cout << "Ingrese la altura del rect�ngulo: ";
                cin >> alturaRect;
                cout << "El �rea del rect�ngulo es: " << baseRect * alturaRect << endl;
                break;





        //WAWAWAWAWAWAWAWAWAWA LA WEA FOMEEEEEEEE
        
         default:
                cout << "Opci�n no v�lida. Por favor, elija una opci�n v�lida." << endl;
                break;
        system("cls");
    } while (opcion != 5);

    return 0;
}
