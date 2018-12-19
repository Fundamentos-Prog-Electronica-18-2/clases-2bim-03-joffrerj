#include <iostream>

using namespace std;

int main()
{
    int promedios[] = {19, 15, 16, 17};
    string nombres[] = {"Luis", "María", "Jose", "Ana"};
    int limite = (sizeof(promedios)/sizeof(promedios[0])); //Se utiliza límite para no especificar la cantidad de datos que hay

    for(int i = 0; i < limite; i++){ //Se puede poner (i < 4) poque solo tenemos 4 datos.
        cout << nombres[i] << " tiene una calificación de " << promedios[i] << endl;
    }
    return 0;
}
