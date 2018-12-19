#include <iostream>
#include <sstream>

using namespace std;

string convertirInttoString(int v){
    // Proceso para convertir un entero en cadena
    stringstream ss;
    ss << v;
    string valor = ss.str();
    return valor;
}
string obtenerData(int a, int b, string nombre)
{
    int suma = a + b;
    string mensaje = nombre + " tiene una calificación de " + convertirInttoString(suma) + "\n"; // \n es para salto de linea en este tipo de ejercicio
    return mensaje;
}

int main()
{
    int bimestre1[] = {19, 15, 16, 17};
    int bimestre2[] = {10, 15, 20, 10};
    string nombres[] = {"Luis", "María", "Jose", "Ana"};
    int suma = 0;


    for(int i = 0; i < 4; i++){
        string data = obtenerData(bimestre1[i], bimestre2[i], nombres[i]);
        cout << data;
    }

    return 0;
}
