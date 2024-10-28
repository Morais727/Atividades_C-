#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string local_saida;
    float salario_base,salario_bruto,gratificacao,imposto,salario_liquido;
   
    local_saida = "holerite.txt";
    ofstream arq_saida(local_saida);

    cin >> salario_base >> gratificacao >> imposto;
    
    salario_bruto = salario_base + gratificacao;
    imposto = salario_bruto * (imposto/100);
    salario_liquido = salario_bruto - imposto;

    arq_saida << fixed << setprecision(2);
    arq_saida << salario_bruto << endl << imposto << endl << salario_liquido << endl;

    arq_saida.close();

    return 0;
}