#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string local_entrada,local_saida;
    float troco;
    int dinheiro_cliente, total_compra, vinte,dez,cinco,dois,um;
   
    local_entrada = "entrada.txt";
    local_saida = "saida.txt";

    ifstream arq_entrada(local_entrada);
    ofstream arq_saida(local_saida);

    arq_entrada >> dinheiro_cliente >> total_compra;

    troco = dinheiro_cliente - total_compra;

    if (troco > 19){
        vinte = troco / 20;
        troco = troco - (vinte * 20);
    }
    if (troco > 9){
        dez = troco / 10;
        troco = troco - (dez * 10);
    }
    if (troco > 4){
        cinco = troco / 5;
        troco = troco - (cinco * 5);
    }
    if (troco > 1){
        dois = troco / 2;
        troco = troco - (dois * 2);
    }
    if (troco > 0){
        um = troco / 1;
        troco = troco - (um * 1);
    }
    

    arq_saida<< vinte << endl << dez << endl << cinco << endl << dois << endl << um;

    arq_entrada.close();
    arq_saida.close();

    return 0;
}