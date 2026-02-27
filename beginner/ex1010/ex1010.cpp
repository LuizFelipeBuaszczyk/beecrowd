#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double total = 0;

    for (int i=0; i<=1; i++){
        int codigo, qtd;
        double preco;

        cin >> codigo >> qtd >> preco;

        total += qtd * preco;
    }

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total <<  endl;

    return 0;
}