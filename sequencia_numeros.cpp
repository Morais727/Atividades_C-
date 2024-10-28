#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n1=1, quantidade_positivo=0, quantidade_negativo=0, qtd_numeros=0, total=0;
    float media, percentual_negativo=0, percentual_positivo=0;

    while (n1 != 0)
    {
        cin >> n1;
        if (n1 > 0)
        {
            quantidade_positivo++;
        }
        else if (n1 < 0)
        {
            quantidade_negativo++;
        }
        total = total + n1;
        qtd_numeros = (quantidade_positivo + quantidade_negativo);

        percentual_positivo = (static_cast<float>(quantidade_positivo) / qtd_numeros);
        percentual_negativo = (static_cast<float>(quantidade_negativo) / qtd_numeros);

        media = static_cast<float>(total) / qtd_numeros;
    }

    cout << media << endl << quantidade_positivo << endl << quantidade_negativo << endl << percentual_positivo << endl << percentual_negativo << endl;
    
}