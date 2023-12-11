long long int fatorial(int x)
{
    long long int fat = 1;

    for(int i = x; i > 0; i--)
    {
        fat *= i;
    }

    return fat;
}

double serie(int n)
{
    double soma = 0;
    
        for(int i = 0; i < n; i++)
    {
        soma += (double) i / fatorial(i * 2);
    }

    return soma;
}