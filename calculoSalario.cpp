#include "iostream"

using namespace std;

int main()
{
    int horas, horasEx,n;
    float salarioT, salarioR, seguroS, afp, renta;

    cout << endl << "CALCULO DEL SALARIO TOTAL Y SALARIO REAL DE N EMPLEADOS" << endl << endl;


//Solicitar que ingrese la cantidad de empleados e ir aumentando en la variable c 
do
    {
        cout << "Ingrese la cantidad de empleados: ";
        cin >> n;

    } while (n <= 0);
        for(int c=0; c < n; c++)
        {     
                cout << endl << "Ingrese las horas que trabajo el empleado: ";
                cin >> horas;

                cout << "Ingrese las horas extra que trabajo el empleado: ";
                cin >> horasEx;

        //Aqui quedan guardadas las variables para hacer los descuentos
                salarioT = (horas * 1.75) + (horasEx * 2.5);
                seguroS = salarioT * 0.04;
                afp = salarioT * 0.0625;
                renta = salarioT * 0.1;

        //Evaluara los dos casos para asi saber si descontarle la renta o no 
                if(salarioT < 500)
                {
                    salarioR = (salarioT) - (seguroS + afp);
                    cout << "El salario total del empleado es: $" << salarioT << endl;
                    cout << "El salario real del empleado es: $" << salarioR << endl;
                }else if (salarioT >= 500)
                {
                salarioR = (salarioT) - (seguroS + afp + renta);
                cout << "El salario total del empleado es: $" << salarioT << endl;
                cout << "El salario real del empleado es: $" << salarioR << endl;
            }

        //En el caso que la variable n sea igual a c, la iteracion acabara 
                if(n == c){break;}
          
        }

return 0;
}