#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string nome;
    double salario, totalVendas, comissao, salarioFinal;

    cin >> nome >> salario >> totalVendas;

    comissao = totalVendas * 0.15;
    salarioFinal = salario + comissao;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salarioFinal << endl;

    return 0;
}