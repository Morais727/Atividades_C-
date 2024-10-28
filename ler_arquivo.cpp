#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string texto,local;

    cin >> local;

    ifstream arq_entrada(local);
    arq_entrada >> texto;
    cout<<texto;
}