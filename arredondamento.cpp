#include <iostream>
#include <cmath>

/*Recebemos valores diferentes e fazemos o arredondamento com três métodos diferentes.*/

using namespace std;

int main(){
    float valor1, valor2;

    cout << "Digite um valor qualquer para que seja arredondado:";
    cin >> valor1;    
    cout << "O valor arredondado  usando round é:" << round(valor1) << endl;
    cout <<"O valor arredondado usando ceil é:" << ceil(valor1) << endl;
    cout <<"O valor arredondado usando floor é:" << floor(valor1) << endl;

    cout << "Digite outro valor: ";
    cin >> valor2;
    cout <<"O valor arredondado usando round é:" << round(valor2) << endl;
    cout <<"O valor arredondado usando ceil é:" << ceil(valor2) << endl;
    cout <<"O valor arredondado usando floor é:" << floor(valor2) << endl;
    return 0;
}