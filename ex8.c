int qtdprimos(int n)
{

  int soma = 0;
  
  int i, j;
  
  if (n < 2) 
  {
    return 0;
  }
  
  for (i = 2; i < n; i++) 
  {
    
    int primo = 1;
    
    for (j = 2; j < i; j++) 
    {
      
      if (i % j == 0) 
      {
        
        primo = 0;
        break;
      }
    }
    
    if (primo == 1) 
    {
      soma++;
    }
  }
  
  return soma;
}
