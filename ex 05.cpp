#include<stdio.h>
int main(){
	float km;
	float litros;
	float divisao;
	
	printf("Escreva a velocidade do carro: ");
	scanf("%f",&km);
	printf("Escreva a quantidade de litros: ");
	scanf("%f",&litros);
	
	divisao= km/litros;
	
	printf("A quantidade gasta de litros %f por quilometro %f eh: ",km,litros,divisao);
}
