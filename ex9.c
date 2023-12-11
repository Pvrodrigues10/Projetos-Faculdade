int somafat(int n)
{
    int fat = 0, i;
    int soma = 0;
    char str[20];

    for(i = 2; i <= n; i++)
    {
        fat *= i;
    }

    sprintf(str, "%d", fat);

    for (i = 0; i < strlen(str); i++) 
    { 
    
    // Adiciona o valor do caractere na soma, subtraindo '0' para obter o valor numérico
    soma += str[i] - '0';
    }

    return soma;
}