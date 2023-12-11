#include <stdio.h>

void imprimedia(int n);

int main()
{
    int n;

    scanf("%d", &n);

    // chamar a funcao
    imprimedia(n);

    return 0;
}

void imprimedia(int n)
{
    if(n == 1)
    {
        printf("domingo\n");
    }
    if(n == 2)
    {
        printf("segunda\n");
    }
    if(n == 3)
    {
        printf("terca\n");
    }
    if(n == 4)
    {
        printf("quarta\n");
    }
    if(n == 5)
    {
        printf("quinta\n");
    }
    if(n == 6)
    {
        printf("sexta\n");
    }
    if(n == 7)
    {
        printf("sabado\n");
    }

}