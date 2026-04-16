#include <iostream>

using namespace std;

int main()
{   
    int n, horas, minutos, segundos;

    cin >> n;

    horas = n / 3600;
    n %= 3600;
    minutos = n / 60;
    segundos = n % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}