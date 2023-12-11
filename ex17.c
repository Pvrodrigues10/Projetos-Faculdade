#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[100];
    int i, min = 0, mai = 0;

    scanf("%[^\n]", frase);

    for(i = 0; frase[i] != '\0'; i++)
    {
        if(islower(frase[i]))
        {
            min++;
        }
        if(isupper(frase[i]))
        {
            mai++;
        }
    }

    printf("%d %d", min, mai);

    return 0;
}