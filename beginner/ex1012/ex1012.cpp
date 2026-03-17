#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14159;

    double a,b,c;
    double rectangled, circle, trapezium, square, rectangle;

    cin >> a >> b >> c;

    rectangled = (a * c) / 2;
    circle = pi * (c * c);
    trapezium = ((a + b) * c) / 2;
    square = b * b;
    rectangle = a * b;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << rectangled << endl;
    cout << "CIRCULO: " << circle << endl;
    cout << "TRAPEZIO: " << trapezium << endl;
    cout << "QUADRADO: " << square << endl;
    cout << "RETANGULO: " << rectangle << endl;

    return 0;
}