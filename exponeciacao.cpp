#include <iostream>
#include <cmath>

using namespace std;

int main(){
        float num;

        cin >> num;

        if (num < 0)
            cout << "Número inválido" << endl;

        float quadrado = pow(num, 2);
        float cubo = pow(num, 3);
        float raiz = sqrt(num);

        cout << quadrado << endl;
        cout << cubo << endl;
        cout << raiz << endl;

        return 0;
}