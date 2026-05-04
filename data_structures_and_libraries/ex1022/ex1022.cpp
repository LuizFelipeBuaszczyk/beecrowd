#include <iostream>

using namespace std;


int main () {
    
    int n;

    cin >> n;

    while(n--){
        int d1, d2, n1, n2, resNumerador, resDenominador;
        char op, div;

        cin >> n1 >> div >> d1 >> op >> n2 >> div >> d2;
        
        switch (op) {

            case '+':
                resNumerador = n1*d2 + n2*d1;
                resDenominador = d1 * d2;
                break;
            case '-':
                resNumerador = n1*d2 - n2*d1; 
                resDenominador = d1 * d2;
                break;
            case '*':
                resNumerador = n1 * n2; 
                resDenominador = d1 * d2;
                break;
            case '/':
                resNumerador = n1 * d2; 
                resDenominador = n2 * d1;
                break;
        } 
        cout << resNumerador << "/" << resDenominador;
        
         
        for (int i=abs(resNumerador); i>0; i--){
            if (abs(resNumerador)%i==0) {
                if(abs(resDenominador)%i==0){

                    if (resNumerador<0){
                        cout << " = " << -1 * abs(resNumerador/i) << "/" << abs(resDenominador/i);
                    } else {
                        cout << " = " << abs(resNumerador/i) << "/" << abs(resDenominador/i);
                    }
                    break;
                }
            }
        }

        cout << endl;
    }


    return  0;
}
