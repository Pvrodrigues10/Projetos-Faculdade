#include <stdio.h>
#include <math.h>

typedef struct ponto
{

    double x, y, z;

}ponto;
int main()
{
    ponto a;

    scanf("%lf %lf %lf", &a.x, &a.y, &a.z);

    ponto b;

    scanf("%lf %lf %lf", &b.x, &b.y, &b.z);

    double res, raiz;
    
    res = pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2);

    raiz = sqrt(res);

    printf("%lf", raiz);
    return 0;
}