#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int notas, centavos, n100,n50,n20,n10,n5,n2,n1,m050,m025,m010,m05,m01;
    double valor;

    cin >> valor;
    notas = valor;
    centavos= ((valor+0.001)-notas)*100;

    cout << "NOTAS:" << endl;
    
    n100= notas/100;
    notas=  notas%100;
    cout <<  n100 << " nota(s) de R$ 100.00" << endl;

    
    n50= notas/50;
    notas= notas%50;
    cout <<  n50 << " nota(s) de R$ 50.00" << endl;

    
    n20= notas/20;
    notas= notas%20;
    cout << n20 << " nota(s) de R$ 20.00" <<  endl;

    
    n10= notas/10;
    notas= notas%10;
    cout << n10 << " nota(s) de R$ 10.00" << endl;

    
    n5= notas/5;
    notas= notas%5;
    cout <<  n5 << " nota(s) de R$ 5.00" << endl;
    
    
    n2= notas/2;
    notas= notas%2;
    cout <<  n2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    
    n1= notas/1;
    notas= n1*1;
    cout << n1 << " moeda(s) de R$ 1.00" << endl;

    m050= centavos/50;
    centavos= centavos%50;
    cout << m050 << " moeda(s) de R$ 0.50" << endl;

    m025= centavos/25;
    centavos= centavos%25;
    cout << m025 << " moeda(s) de R$ 0.25" << endl;

    m010= centavos/10;
    centavos= centavos%10;
    cout << m010 << " moeda(s) de R$ 0.10" << endl;

    m05= centavos/5;
    centavos= centavos%5;
    cout << m05 << " moeda(s) de R$ 0.05" << endl;
    
    m01= centavos/1;
    centavos = centavos%1;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}