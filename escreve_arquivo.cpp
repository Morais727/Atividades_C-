#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string texto,local;

    cin >> local >> texto;

    ofstream arq_saida(local);
    arq_saida << texto;
    arq_saida.close();
}