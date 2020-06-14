#include "iostream"

using namespace std;

int main(void)
{
    // La variable year es la que almacenará el año que ingrese el usuario
    int year;

    // (char) 164 es la ñ en la tabla ASCII y (char) 165 es Ñ en la tabla ASCII

    cout<< endl << "DETERMINAR SI EL A" << (char) 165 << "O ES BISIESTO O NO" << endl;

    cout << "Ingrese el a" << (char) 164 << "o que quiere saber: ";
    cin >> year;

    //Condición para saber si es año bisiesto o no
    if (year % 400 == 0)
        {
            cout << endl << "El a" << (char) 164 << "o " << year << " es BISIESTO";
        }
        else if (year % 4 == 0 && year != 0)
         {
            cout << endl << "El a" << (char) 164 << "o " << year << " es BISIESTO";
        } else
        {  
            cout << endl << "El a" << (char) 164 << "o " << year << " NO es BISIESTO";
        }
    
    
}