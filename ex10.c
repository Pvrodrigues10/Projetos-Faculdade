int maxvet(int *vet, int n)
{
    int maior = vet[0], i;

    for(i = 1; i < n; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
        
    }
    
    return maior;
}
