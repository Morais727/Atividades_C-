#include <iostream>
#include <iomanip> 

using namespace std;

int main(){
    float base, lado;

    cin >> base >> lado;
    
    float area = base * lado;

    float litros = area / 2;

    cout << fixed;
    cout.precision(2);

    cout << litros*3 << " Litros" << endl;

    return 0;
}