#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    int a, b, c, maiorAB, maior;
    
    cin >> a >> b >> c;
    
    maiorAB = (a + b + abs(a-b))/2;
    
    maior = maiorAB > c ? maiorAB : c; 
    
    cout << maior << " eh o maior" << endl;
    
    return 0;
}