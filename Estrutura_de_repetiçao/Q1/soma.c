#include <stdio.h>

int main()
{   // declaração de Variável 
    int soma = 0; 

    // Laço for que percorre 
    for (int i = 1; i <= 100; i++)
    {
        soma = soma + i; 
    }

    // Imprime o resultado
    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;
}