int afimb(char *a, char *b)
{
    int tamA = strlen(a);
    int tamB = strlen(b);

    for (int i = 0; i < tamA; i++) // Percorre a string A de trás para frente
    { 
        if (a[tamA - 1 - i] != b[tamB - 1 - i]) // Se o caractere atual de A for diferente do caractere correspondente de B
        { 
            return 0 ; 
        }
    }

    return 1;
}
