#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

 main(void){ 

  int a, b, anterior, i, n;
 
  a = 0;
  b = 1;
 
  printf("Digite um numero: ");
  scanf("%d", &n);
  printf("Serie de Fibonacci:\n");
  printf("%d\n", b);
  for(i = 0; i < n; i++)
  {
    anterior = a + b;
    a = b;
    b = anterior;
    printf("%d\n", anterior);
  }
  return 0;
}
