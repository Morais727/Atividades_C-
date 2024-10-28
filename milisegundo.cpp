#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string local_saida,local_entrada;
    long long milissegundos;
    int HORAS,MINUTOS;
    float segundos;

    HORAS=0;
    MINUTOS=0;
    segundos=0.0;
    milissegundos=0.0;

    local_entrada = "tempo.txt";
    local_saida = "horario.txt";

    ifstream arq_entrada(local_entrada);
    ofstream arq_saida(local_saida);

    arq_entrada >> milissegundos;

    if (milissegundos >= 3600000){
        HORAS = milissegundos / 3600000;
        milissegundos = (milissegundos % 3600000); 
    }
    if (milissegundos >= 60000){
        MINUTOS = milissegundos / 60000;
        milissegundos = (milissegundos % 60000); 
    }
    if (milissegundos >= 1000){
        segundos = milissegundos / 1000.0;
    }

    arq_saida << HORAS << ":" << MINUTOS << ":" << segundos;

    arq_entrada.close();
    arq_saida.close();

    return 0;
}