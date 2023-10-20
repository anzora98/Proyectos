#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//Definir funciones
void interesSimple(float, float, float);
void interesCompuesto(float, float, float);


//Menu principal
int main(){
    //numero de cifras decimales
    cout << setprecision(5);
    //Declarar variables
    int numero;


    //Funcion repetible
    do{
    int year;
    float monto, tazaInteres;
    cout << "Que desea realizar" << endl;
    cout << "           1. calcular interes simple. " << endl;
    cout << "           2. calcular interes compuesto. " << endl;
    cout << "           3. Salir" << endl << endl;
    cout << "Su opcion es: ";
    cin >> numero;

    //Limpiar consola
    system("clear");

    switch (numero){
        //Opcion 1
        case 1:
            cout << "Ingrese monto a invertir: ";
            cin >> monto;
            cout << "Taza de interes anual 3.5% \n";
            tazaInteres = 0.035;
            cout << "Ingrese numero de years de la inversion: ";
            cin >> year;
            cout << "Calculo de interes simple:\n\n";
            interesSimple(monto, tazaInteres, year);
        break;
        //Opcion 2
        case 2:
            cout << "Ingrese monto a invertir: ";
            cin >> monto;
            cout << "Taza de interes anual 5% \n";
            tazaInteres = 0.05;
            cout << "Ingrese numero de years de la inversion: ";
            cin >> year;
            cout << "Calculo de interes Compuesto:\n\n";
            interesCompuesto(monto, tazaInteres, year);
        break;
        //Opcion 3
        case 3:
            cout << endl;
            cout << "Saliendo... gracias!!! Presione una tecla para continuar";
        break;
        //Opcion no definida
        default:   
            cout << "No admitido" << endl;
            cout << "Pulse una tecla para continuar";
        break;
    }
        cout << endl << endl;
    }while(numero == 1 || numero == 2);

return 0;
};

//Funciones

//Funcion interes simple
void interesSimple(float monto, float interes, float year){
    //Variables a utilizar
    float i;
    float interesGanado;
    float actual = monto;
    float interesT = monto * 0.035;
    float vFuturo;

//Recorrer años
    for(int j = 1; j <= year; j ++){
        //Encontrar monto
        vFuturo = actual * (1 + (interes * j));
        //Calculo del interes
        interesGanado = interesT * j;
        //Salida de usuario
        cout << "Capital inicial$: " << actual << " Interes en el year "<< j << " $    " << interesGanado <<" Valor futuro$: " 
        << vFuturo << endl;
    }

};

//Funcion Interes compuesto
void interesCompuesto(float monto, float interes, float year){
    //Variables a utilizar
    float i;
    float actual = monto;
    float vFuturo;
    float interesGanado = 0;

//Recorrer años
    for(float j = 1; j <= year; j ++){
        vFuturo = actual * pow((1 + interes), j);

//Interes ganado
    interesGanado = vFuturo - 1000;
//Salida
    cout << "Capital inicial$: " << actual << " Interes en el year "<< j << " $ " << interesGanado 
    <<"  Valor futuro:$  " << vFuturo << endl;
    };


};