#include <stdio.h>

int main()

{ // Variável para armazenar a soma
    int soma = 0;

    // Laço for que percorre
    for (int i = 1; i <= 100; i++)
    {
        soma = i++; // Adiciona o número atual à soma
    }

    // Imprime o resultado
    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;
}