#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string local_entrada,local_saida;
    float centimetros, altura;
    int total;
    local_entrada = "entrada.txt";
    local_saida = "degraus.txt";

    ifstream arq_entrada(local_entrada);
    ofstream arq_saida(local_saida);

    arq_entrada >> centimetros >> altura;

    total = ceil(altura/ (centimetros/100));

    arq_saida << total;

    arq_entrada.close();
    arq_saida.close();

    return 0;
}