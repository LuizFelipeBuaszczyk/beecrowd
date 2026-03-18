#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main()
{
    int x;
    double y, consumption;

    cin >> x >> y;

    consumption = x / y;

    cout << fixed << setprecision(3);
    cout << consumption << " km/l" << endl;
    
    return 0;
}