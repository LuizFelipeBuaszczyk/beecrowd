#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    int horas, velocidadeMedia;
    double litros;

    cin >> horas >> velocidadeMedia;

    litros = (horas * velocidadeMedia) / 12.0;

    cout << fixed << setprecision(3);
    cout << litros << endl;

    return 0;
}