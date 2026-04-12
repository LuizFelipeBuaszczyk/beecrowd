#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    int n, c100, c50, c20, c10, c5, c2, c1;

    c100 = c50 = c20 = c10 = c5 = c2 = c1 = 0;
    cin >> n;

    cout << n << endl;
    while (n>0) {

        if (n>=100) {
            n -= 100; 
            c100++;
            continue;
        }

        if (n>=50) {
            n -= 50;
            c50++;
            continue;
        }

        if (n>=20) {
            n -= 20;
            c20++;
            continue;
        }

        if (n>=10) {
            n -= 10;
            c10++;
            continue;
        }

        if (n>=5) {
            n -= 5;
            c5++;
            continue;
        }

        if (n>=2) {
            n -= 2;
            c2++;
            continue;
        }

        if (n>=1) {
            n -= 1;
            c1++;
            continue;
        }

    }

    cout << c100 << " nota(s) de R$ 100,00" << endl;
    cout << c50 << " nota(s) de R$ 50,00" << endl;
    cout << c20 << " nota(s) de R$ 20,00" << endl;
    cout << c10 << " nota(s) de R$ 10,00" << endl;
    cout << c5 << " nota(s) de R$ 5,00" << endl;
    cout << c2 << " nota(s) de R$ 2,00" << endl;
    cout << c1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}