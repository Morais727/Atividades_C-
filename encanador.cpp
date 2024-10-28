#include <iostream>
#include <fstream> // Incluindo a biblioteca fstream

using namespace std;

int main() {
    int dias; 
    float valorLiquido;
    
    ifstream entrada("entrada.txt"); 
    ofstream saida("saida.txt");

    entrada >> dias; 
    valorLiquido = ((dias * 60) * 0.92);

    cout << "R$ " << valorLiquido << endl; 


    saida << "R$ " << valorLiquido; 
    saida.close(); 
    entrada.close(); 
    return 0;
}
