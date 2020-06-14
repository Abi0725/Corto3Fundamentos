#include "iostream"

using namespace std;

int main(void)
{
    //El numero secreto es 62
    int numIngresado, intentos;

    cout << endl << "N" << (char) 233 << "MERO M" << (char) 181 << "GICO" << endl;

    cout << endl << "Intenta adivinar el numero secreto" << endl << "Tienes 5 intentos" << endl;
    cout << "RECUERDA! El numero debe estar en un rango del 1 al 100" << endl;
    

    //Cree un for ya que ese sera el que contara los numero de intentos 
   for(intentos=0; intentos < 6;){
    cout << endl << "Escribe el numero: ";
    cin >> numIngresado;

    //Cada vez que ingrese un nuevo numero, la cantidad de intentos aumentara en 1
    intentos = intentos + 1;

    if(numIngresado < 62)
    {
        cout << "Incorrecto, este numero es menor que el numero secreto :(" << endl;
        cout << "Numero de intentos: " << intentos << endl;
      
    }
    if(numIngresado > 62)
    {
        cout << "Incorrecto, este numero es mayor que el numero secreto :(" << endl;
        cout << "Numero de intentos: " << intentos << endl;

    }

    //Cuando el numero ingresado sea igual a 62 el ciclo for se termina y luego manda el mensaje de felicidades

    if(numIngresado == 62){break;}
    };

    if(numIngresado == 62)
    {

    cout << "FELICIDADES!!" << endl;
    cout << "Adivinaste el numero secreto en " << intentos << " intentos." << endl;

    }

    //Si el numero ingresado no es igual a 62 en los 5 intentos, entonces el programa muestra el numero secreto
    if(numIngresado != 62)
    {

    cout << "Que lastima, no has adivinado el numero";
    cout << endl << "El numero secreto es: "<< 62 << endl;

    }


return 0;  
}