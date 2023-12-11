#include <stdio.h>
#include <stdlib.h>

void min_max(int *array, int N, int *min, int *max);

int main() 
{
  
  int N;
  scanf("%d", &N);
 
  int *array = malloc(N * sizeof(int));
  
  for (int i = 0; i < N; i++) {
    scanf("%d", array + i);
  }
  
  int min, max;
  
  min_max(array, N, &min, &max);
  
  printf("%d %d\n", min, max);
  
  free(array);
  return 0;
}


void min_max(int *array, int N, int *min, int *max) 
{
  
  *min = *array;
  *max = *array;
  
  for (int i = 0; i < N; i++) 
  {
    
    if (*(array + i) < *min) {
      *min = *(array + i);
    }
    
    if (*(array + i) > *max) {
      *max = *(array + i);
    }
  }
}
