#include <iostream>
#include <cmath>

using namespace std;

// Função para calcular o MDC usando o algoritmo de Euclides
int simplifica_com_MDC(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;

    }
    return a;
}

int main()
{
    int a,b,mdc;
    cin >> a >> b;

    if (b > 0)
    {
        mdc = simplifica_com_MDC(a,b);
        a = a / mdc;
        b = b / mdc;

        cout << a << endl << b << endl;

    }
    else
    {
        cout << "Denominador não pode ser igual a zero." << endl;
    }
}