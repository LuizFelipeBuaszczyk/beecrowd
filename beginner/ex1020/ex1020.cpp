#include <iostream>

using namespace std;

int main()
{   
    int age, anos, meses, dias;

    cin >> age;

    anos = age / 365;
    age %= 365;
    meses = age / 30;
    dias = age % 30;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return 0;
}