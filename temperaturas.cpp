#include <iostream>
#include <fstream> // Incluindo a biblioteca fstream

using namespace std;

int main() {
    float celsius;
    
    cin >> celsius;

    ofstream saida("temperatura.txt");

    float kelvin = (celsius + 273);
    float Fahrenheit = ((celsius*1.8) + 32);

    saida << kelvin << " K" << "\n";
    saida << Fahrenheit << " F";

    saida.close(); 

    return 0;
}