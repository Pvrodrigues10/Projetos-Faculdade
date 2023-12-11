#include <stdio.h>
#include <ctype.h>

int main() 
{
    char frase[100];
    int maiuscula = 1, i;

    scanf("%[^\n]", frase);

    for (i = 0; frase[i] != '\0'; i++) 
    {
        if (isalpha(frase[i])) 
        {
            if (maiuscula) 
            {
                frase[i] = toupper(frase[i]);
                maiuscula = 0;
            }
        }
        else 
        {
            maiuscula = 1;
        }

        if (frase[i] == ' ') 
        {
            maiuscula = 1;
        }
    }

    printf("%s", frase);

    return 0;
}
