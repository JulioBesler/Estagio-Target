#include <stdio.h>

int main() {
    int a,b,c;
    int n,cont;

    n=10;

    a = 1;
    b=6;
    cont = 2;

    printf("Sequencia de Fibonacci a partir do numero 6 \n");
    printf("\n1\n");
    while(cont < n) {
      c = a + b;
      printf("%d \n", c);
      a = b;
      b = c;
      cont ++;
    }
    printf("O numero 6 nao pertence a sequencia de Fibonacci \n");
  return(0);
}