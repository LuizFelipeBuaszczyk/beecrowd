#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int employeeNumber, hoursWorkedInMonth;
    double valuePerHour, salary;

    cin >> employeeNumber >> hoursWorkedInMonth >> valuePerHour;

    salary = valuePerHour * hoursWorkedInMonth;

    cout << "NUMBER = " << employeeNumber << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << endl;

    return 0;
}