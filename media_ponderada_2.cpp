#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    string local_entrada,local_saida;
    local_entrada = "notas.txt";
    local_saida = "final.txt";
    int nota1, nota2, nota3, peso1, peso2, peso3;
    float media;
    

    ifstream arq_entrada(local_entrada);
    ofstream arq_saida(local_saida);

    arq_entrada >> nota1 >> peso1 >> nota2 >> peso2 >> nota3 >> peso3;

    media = (float(nota1 * peso1) + float(nota2 * peso2) + float(nota3 * peso3)) / (peso1 + peso2 + peso3);
    arq_saida << fixed << setprecision(2);

    arq_saida << media;

    arq_saida.close();
    arq_saida.close();

    return 0;
}