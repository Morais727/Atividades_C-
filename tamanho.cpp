#include <stdio.h>

int main() {
    int lista[] = {10, 20, 30, 40, 50};  // Array estático com 5 elementos
    int tamanho = sizeof(lista) / sizeof(lista[0]);  // Calcula o número de elementos

    printf("O número de elementos no array é: %d\n", tamanho);

    return 0;
}
