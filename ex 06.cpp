#include <stdio.h>

int main() {
   float preco, total;
   int q, anos, dias;

   printf("Digite o preco do maco de cigarros: ");
   scanf("%f", &preco);

   printf("Digite a quantidade de macos consumidos por dia: ");
   scanf("%d", &q);

   printf("Digite o tempo em anos que a pessoa fuma: ");
   scanf("%d", &anos);

   dias = anos * 365;
   total = preco * q * dias;

   printf("A pessoa ja gastou R$ %.2f fumando.\n", total);

}

