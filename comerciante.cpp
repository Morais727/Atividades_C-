#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string local_entrada,local_saida;
    local_entrada = "venda.txt";
    local_saida = "cliente.txt";

    float valor_real, qtd_prestacoes, valor_total_antes, valor_pretacao_antes, valor_total_depois, valor_pretacao_depois;

    ifstream arq_entrada(local_entrada);
    ofstream arq_saida(local_saida);

    arq_entrada >> valor_real >> qtd_prestacoes;

    valor_total_antes = valor_real + (valor_real * 10)/100;
    valor_pretacao_antes = valor_total_antes / qtd_prestacoes;
    valor_pretacao_depois = valor_pretacao_antes - (valor_pretacao_antes* 10)/100;
    valor_total_depois = valor_pretacao_depois * qtd_prestacoes;

    arq_saida << fixed << setprecision(2);
    arq_saida << valor_total_antes << endl;
    arq_saida << valor_pretacao_antes << endl;    
    arq_saida << valor_pretacao_depois << endl;
    arq_saida << valor_total_depois;
    arq_entrada.close();
    arq_saida.close();
    return 0;
}