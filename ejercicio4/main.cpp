#include <iostream>

using namespace std;

int main()
{
    int promedios[] = {19, 15, 16, 17};
    string nombres[] = {"Luis", "Mar�a", "Jose", "Ana"};
    int limite = (sizeof(promedios)/sizeof(promedios[0])); //Se utiliza l�mite para no especificar la cantidad de datos que hay

    for(int i = 0; i < limite; i++){ //Se puede poner (i < 4) poque solo tenemos 4 datos.
        cout << nombres[i] << " tiene una calificaci�n de " << promedios[i] << endl;
    }
    return 0;
}
