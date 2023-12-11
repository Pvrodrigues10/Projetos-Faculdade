#include <stdio.h>
#include <stdlib.h>

int *soma_vetores(int N, int *v1, int *v2);

int main() 
{
  int N; 
  int i; 
  int *v1, *v2, *v3; 

  scanf("%d", &N);

  
  v1 = (int *) malloc(N * sizeof(int));
  v2 = (int *) malloc(N * sizeof(int));

  // Verificação se a alocação foi bem sucedida
  if (v1 == NULL || v2 == NULL) 
  {
    exit(1);
  }

  
  for (i = 0; i < N; i++) 
  {
    scanf("%d", (v1 + i));
  }
  
  for (i = 0; i < N; i++) 
  {
    scanf("%d", (v2 + i)); 
  }

  
  v3 = soma_vetores(N, v1, v2);

  
  for (i = 0; i < N; i++) 
  {
    printf("%d ", *(v3 + i));
  }
  printf("\n");

  // Liberação da memória alocada para os vetores
  free(v1);
  free(v2);
  free(v3);

  return 0;
}

int *soma_vetores(int N, int *v1, int *v2) 
{
 
  int i;
  int *v3; 

  v3 = (int *) malloc(N * sizeof(int));

  if (v3 == NULL) 
  {
    exit(1);
  }
 
  for (i = 0; i < N; i++) 
  {
    *(v3 + i) = *(v1 + i) + *(v2 + i);
  }

 
  return v3;
}