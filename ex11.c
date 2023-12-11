double avgvet(int *vet, int n)
{
    int soma = 0;
    double media;
    int i;

    for(i = 0; i < n; i++)
    {
        soma += vet[i];
    }

    media = soma / n;
    
    return media;
}