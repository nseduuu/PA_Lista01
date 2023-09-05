#include<stdio.h>
int main(){
	float n1,n2,n3,n4;
	float media;
	
	printf("Escreva um numero: ");
	scanf("%f",&n1);
	printf("Escreva um numero: ");
	scanf("%f",&n2);
	printf("Escreva um numero: ");
	scanf("%f",&n3);
	printf("Escreva um numero: ");
	scanf("%f",&n4);
	
	media= (n1+n2+n3+n4)/4;
	
	printf("A media dos numeros %.2f %.2f %.2f %.2f eh: %.2f", n1,n2,n3,n4,media);  
}
