#include <iostream>

using namespace std;

double fatorial(int num)
{
    double resultado = 1;

    for (int i = 2; i <= num; i++)
    {
        resultado *= i;
    }

    return resultado;
}

int main()
{
    int a, b, c;
    double a_fat, b_fat, c_fat, combinacao = 0;

    cin >> a >> b;

    c = a - b;

    a_fat = fatorial(a);
    b_fat = fatorial(b);
    c_fat = fatorial(c);

    combinacao = a_fat/(b_fat*c_fat);

    cout << fixed << combinacao << endl;

    return 0;

}

//Combinação simples = N!/(P!*(N-P)!)