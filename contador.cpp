#include <iostream>

using namespace std;

int main(){
    int n1, n2, i, contador;

    cin >> n1 >> n2;

    while (n1 > 0)
    {
        n1 = n1 - n2;
        contador++;        
    }
    cout << contador << endl;
     
    return 0;
}