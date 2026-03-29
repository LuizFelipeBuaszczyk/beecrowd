#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{   

    double x[2], y[2], resultado;

    for (int i=0; i<=1; i++){
        cin >> x[i] >> y[i];
    }

    resultado = sqrt(pow((x[1]-x[0]),2) + pow((y[1]-y[0]), 2));

    cout << fixed << setprecision(4);
    cout << resultado << endl;

    return 0;
}