#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int N=0,i=1,soma=0;
    string local_saida = "saida.txt";

    ofstream arq_saida(local_saida);
    
    cin >> N;

    if (N >= 2)
    {
        while (i < N)
        {
            if (N%i== 0)
            {
                soma = soma + i;

                arq_saida << i << "+" ;
            }
            i++;
        }
        soma = soma + N;
        arq_saida << N << "=" << soma << endl;
    } 
    else 
    {
        cout << "Valor incorreto" << endl;
    }

}