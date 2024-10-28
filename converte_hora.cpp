#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string local_entrada,local_saida;
    float hora, minuto;
    int total_min,total_seg,conv_hora;

    local_saida = "saida.txt";

    ofstream arq_saida(local_saida);

    cin >> hora >> minuto;

    conv_hora = hora * 60;
    total_min = conv_hora + minuto;
    total_seg = total_min * 60;

    arq_saida << conv_hora << endl << total_min << endl << total_seg;

    arq_saida.close();

    return 0;
}