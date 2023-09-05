#include <stdio.h>

int main() {
   int numero, multi;

   printf("Digite um numero: ");
   scanf("%d", &numero);

   multi = (numero / 5) * 5 + 5;

   printf("O próximo numero multiplo de 5 eh: %d\n", multi);

   return 0;
}

