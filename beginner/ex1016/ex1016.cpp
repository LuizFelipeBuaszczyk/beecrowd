#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    const int minutoPorKM = 2;
    int distancia, tempo;

    cin >> distancia;

    tempo = 0;
    while(distancia > 0){
        tempo += minutoPorKM;
        distancia--;
    }

    cout << tempo << " minutos" << endl;

    return 0;
}