#include <iostream>

using namespace std;

int main()
{
    int vetor_5[5], vetor_organizado[5];

    for (int i = 0; i<5; i++)
    {
        cin >> vetor_5[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vetor_5[i] < vetor_5[j])
            {
                vetor_organizado[i] = vetor_5[i];
            }
            else
            {
                vetor_organizado[i] = vetor_5[j];
            }
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vetor_organizado[i] << " ";
    }

    return 0;
}