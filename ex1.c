#include <stdio.h>

// array de string pros nomes
char *meses[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

void imprimirdata(int dia, int mes, int ano); // prototipo da funcao

int main()
{
    int dia, mes, ano;

    // le a data no formato dd/mm/aaaa
    scanf("%d/%d/%d", &dia, &mes, &ano);

    imprimirdata(dia, mes, ano); // chama a funcao para imprimir a data por extenso 

    return 0;
}

void imprimirdata(int dia, int mes, int ano) // define a funcao
{
    printf("%d de %s de %d", dia, meses[mes - 1], ano);
}