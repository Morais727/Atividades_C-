#include <iostream>
#include <fstream> // Incluindo a biblioteca fstream

using namespace std;

int main() {
    float salario;
    
    cin >> salario;

    ofstream saida("salario.txt");

    float dolar = (salario / 2.13);
    float euro = (salario / 2.84);
    float libra = (salario / 3.34); 
    


    saida << dolar << "\n";
    saida << euro << "\n";
    saida << libra << "\n";

    saida.close(); 

    return 0;
}