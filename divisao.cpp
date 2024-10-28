#include <iostream>
#include <cmath>

/*Recebendo valores para a, b e c somoando-os e dividindo por 3 (numero de elementos)*/
/*Apos isso, verificamos maneiras diferentes de divisão com ponto flutante*/

using namespace std;

int main(){
    int a,b,c;
    float valor;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;

    valor = (a + b + c) / 3.0;

    cout << "O valor da divisão é: " << valor << endl;

    cout << 1.0 / 4 << endl;
    cout << 1 / (float) 4 << endl;

    return 0;
}