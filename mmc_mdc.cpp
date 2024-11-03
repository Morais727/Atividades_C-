#include <iostream>
using namespace std;

// Função para calcular o MDC usando o algoritmo de Euclides
int calcularMDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função para calcular o MMC usando a relação: mmc(a, b) = |a * b| / mdc(a, b)
int calcularMMC(int a, int b) {
    return (a * b) / calcularMDC(a, b);
}

int main() {
    int num1, num2;
    cout << "Digite dois números: ";
    cin >> num1 >> num2;

    int mdc = calcularMDC(num1, num2);
    int mmc = calcularMMC(num1, num2);

    cout << "MDC de " << num1 << " e " << num2 << " é: " << mdc << endl;
    cout << "MMC de " << num1 << " e " << num2 << " é: " << mmc << endl;

    return 0;
}
