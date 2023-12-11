#include <stdio.h>

typedef struct ponto
{
    int x, y;
}ponto;

int retangulo(ponto P, ponto v1, ponto v2);

int main()
{
    ponto P, v1, v2;

   
    scanf("%d %d", &P.x, &P.y);
    scanf("%d %d", &v1.x, &v1.y);
    scanf("%d %d", &v2.x, &v2.y);
    
   
    printf("%d", retangulo(P, v1, v2));
 
    return 0;
}

int retangulo(ponto P, ponto v1, ponto v2)
{
    if (P.x >= v1.x && P.x <= v2.x)
    {
        if (P.y >= v1.y && P.y <= v2.y)
        {
            return 1;
        }
    }

    return 0;  
}

