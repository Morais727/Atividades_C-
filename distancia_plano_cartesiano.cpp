#include <iostream>
#include <cmath>  

/*Calculamos a hipotenusa entre dois pontos no plano cartesiano. Distância entre pontos no plano cartesiano.*/

using namespace std;

int main() {
    float x1, x2, y1, y2, distancia;
    cout << "Digite o valores x1 e y1 (coordenada do primeiro ponto): ";
    cin >> x1 >> y1;
    cout << "Digite o valores x2 e y2 (coordenada do segundo ponto): ";
    cin >> x2 >> y2;

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "A distância entre os dois pontos é de " << distancia << endl;

    return 0;
}
