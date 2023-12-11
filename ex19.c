#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int count = 0;
    int tam, max;
    
    scanf("%s", str);
    tam = strlen(str);
    
    // Conta quantos caracteres 'a' existem na string
    for (int i = 0; i < tam; i++) 
    {
        if (str[i] == 'a') 
        {
            count++;
        }
    }
    
    // Calcula o maior tamanho da string resultante
    max = count * 2 - 1;
    
    if (max > tam) 
    {
        printf("%d", tam);
    } 
    else 
    {
        printf("%d", max);
    }
    
    return 0;
}
