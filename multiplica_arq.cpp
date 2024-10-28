#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    string local;
    local = "saida.txt";
    int num,soma,produto,num1,num2,num3;

    ofstream arq_saida(local);

    cin >> num; 

    
    if (num>99 && num<1000){
        num1 = num/100;
        num2 = (num%100)/10;
        num3 = num%10;
        
        produto = num1*num2*num3;
        
        soma = num1+num2+num3;
        
        cout << soma << endl;
        arq_saida << produto;
    }
    else
        cout << "Numero invalido" << endl;
    arq_saida.close();
}