#include <stdio.h>

float med(float n1, float n2, float n3, char AP);

int main()
{
    float n1, n2, n3;
    char AP;

    scanf("%f %f %f", &n1, &n2, &n3);
    scanf(" %c", &AP);
    
    printf("%.2f", med(n1, n2, n3, AP));
    return 0;
}

float med(float n1, float n2, float n3, char AP)
{
    float media;
    
    switch (AP)
    {
    case 'A':
    
        media = (n1 + n2 + n3) / 3;
        break;
    
    case 'P':

        media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10; 
        break;
    }

    
    return media;
}