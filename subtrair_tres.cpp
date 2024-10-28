#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num_n;

    cin >> num_n;
    
    if (num_n < 0)
        cout << "Número inválido" << endl;

    float vezes = num_n / 3; 

    cout << round(vezes) << endl; 

    return 0;
}