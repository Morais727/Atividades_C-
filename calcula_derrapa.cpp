#include <iostream>
#include <cmath>

using namespace std;

int main(){
        float marca_derrapa;

        cin >> marca_derrapa;

        float velocidade = 14.6*(sqrt(marca_derrapa));

        cout << velocidade << endl;

        return 0;
}