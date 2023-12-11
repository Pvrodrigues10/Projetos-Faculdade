#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   char A[100], B[100], C[100];
   int qa = 0, tama, tamb, tamc;
   int i, j, c = 0;

   scanf("%s", A);

   tama = strlen(A);

   if(tama > 100)
   {
      c++;
   }

   i = 0;
   j = 0;
   while(A[i] != '\0')
   {
      if(A[i] == 'a')
      {
         qa++;
      }
      else
      {
         C[j] = A[i];
         j++;
      }
      i++;
   }

   tamb = ((tama - qa) / 2) + qa;
   tamc = (tama - qa) / 2;

   if(tamc % 2 == 1)
   {
      c++;
   }

   for(i = 0 ; i < tamb ; i++)
   {
      B[i] = A[i];
   }

   B[tamb] = '\0';
   C[j] = '\0';

   for(i = 0 ; i < tamc ; i++)
   {
      if(C[i] != C[i+tamc])
      {
         c++;
      }
   }

   if(c == 0)
   {
      printf("%s\n", B);   
   }
   else
   {
      printf("-1");
   }

   return 0;
}