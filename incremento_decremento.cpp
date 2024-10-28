#include <iostream>
#include <cmath>

/*Explorando incrento e decremeto de valores.*/

using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Valor de c: " << c << endl;
    cout << "Valor de d: " << d << endl;

    a++;
    b--;
    c += 10;
    d -= 10;

    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Valor de c: " << c << endl;
    cout << "Valor de d: " << d << endl;

    return 0;
}