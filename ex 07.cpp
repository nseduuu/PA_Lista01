#include <stdio.h>

int main() {
   int quantia, ced50, ced20, ced10;

   printf("Digite a quantia desejada (m�ltipla de 10): ");
   scanf("%d", &quantia);

   ced50 = quantia / 50;
   quantia = quantia % 50;

   ced20 = quantia / 20;
   quantia = quantia % 20;

   ced10 = quantia / 10;

   printf("C�dulas de 50 reais: %d\n", ced50);
   printf("C�dulas de 20 reais: %d\n", ced20);
   printf("C�dulas de 10 reais: %d\n", ced10);

}

