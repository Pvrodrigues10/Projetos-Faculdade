#include <stdio.h>
#include <string.h>

int soma_a(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", soma_a(n));

    return 0;
}

int soma_a(int n)
{
    int soma = 0;
    char str[20];

    sprintf(str, "%d", n);

    for (int i = 0; i < strlen(str); i++) 
    { 
    // Adiciona o valor do caractere na soma, subtraindo '0' para obter o valor numérico
    soma += str[i] - '0';
    }

    return soma;
}