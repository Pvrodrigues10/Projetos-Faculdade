int quadrados(int n)
{
    int soma; 

    for(int i = 1; i <= n; i++)
    {
        soma += (i * i);
    }
    
    n = soma;

    return n;
}