#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[100], palavra2[100], esp[100] = " ";

    scanf("%[^\n] " "%[^\n]", palavra1, palavra2);

    strcat(palavra1, esp);
    strcat(palavra1, palavra2);

    printf("%s", palavra1);
    return 0;
}