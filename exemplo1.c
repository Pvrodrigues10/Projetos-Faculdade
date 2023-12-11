#include <stdio.h>

int max(int x, int y, int z);

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int r;

    // chamar função
    r = max(a, b, c);

    printf("R = %d\n", r);
    
    return 0;
}

int max(int x, int y, int z)
{
    int maior = x; // assume que 'a' é maior que o valor

    if(maior < y)
    {
        maior = y; // se o b for maior, troca
    }
    if(maior < z)
    {
        maior = z; // se 'z' for maior, troca
    }

    return maior;
}