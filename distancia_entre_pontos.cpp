#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    string local;
    float x1,x2,y1,y2,distancia;

    local = "entrada.txt";
    ifstream arq_entrada(local);
    arq_entrada >> x1 >> y1 >> x2 >> y2;

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << distancia << endl;

    arq_entrada.close();
}