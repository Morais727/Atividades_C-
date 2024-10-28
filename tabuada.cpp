#include <iostream>

using namespace std;

int main(){
    int numero;
    int i;
    int resultado;

    cout << "Digite um número: ";
    cin >> numero;

    for (i=1;i<=10;i++){
        resultado = numero * i;
        cout << numero << " x " << i << " = " << resultado << endl;
    }

    return 0;
}