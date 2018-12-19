#include <iostream>
#include <sstream>

using namespace std;

string obtenerData(int a, int b, string nombre)
{
    int suma = a + b;
    double prom = (suma/2);
    string promedio = "";
    if(prom <= 10){
        promedio = "Insuficiente.";
    }else{
        if(prom >= 10.1 && prom <= 14){
            promedio = "Regular.";
      }else{
          if(prom >= 14.1 && prom <= 16){
             promedio = "Bueno. ";
         }else{
             if(prom >= 16.1 && prom <= 18.5){
                promedio = "Muy bueno.";
            }else{
              if(prom >= 18.6 && prom <= 20){
                  promedio = "Sobresaliente.";
            }
        }
        }
        }
        }

    string mensaje = nombre + " tiene un promedio " + promedio + "\n";
    return mensaje;
}

int main()
{
    int bimestre1[] = {20, 15, 16, 19};
    int bimestre2[] = {20, 18, 10, 10};
    string nombres[] = {"Alex", "Monica", "Alexander", "Sandra"};

    for(int i = 0; i < 4; i++){
        string data = obtenerData(bimestre1[i], bimestre2[i], nombres[i]);
        cout << data;
    }

    return 0;
}
