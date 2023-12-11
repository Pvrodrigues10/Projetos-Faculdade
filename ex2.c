#include <stdio.h>

int primo(int n); // prototipo da funcao

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", primo(n) );

    return 0;
}

int primo(int n)
{
    if(n < 2)
    {
        return 0;
    }
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0) // se o numero for divisivel por i, ele nao eh primo
        {
            return 0;
        }
    }
    
    return 1; // se chegou ate aq eh primo
}