#include <iostream>

using namespace std;

int main()
{
    int bimestre1[] = {19, 15, 16, 17};
    int bimestre2[] = {10, 15, 20, 10};
    string nombres[] = {"Luis", "María", "Jose", "Ana"};

    for(int i = 0; i < 4; i++){
        cout << nombres[i] << " tiene una calificación final de " << (bimestre1[i] + bimestre2[i]) << endl;
    }
    return 0;
}
