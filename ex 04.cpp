#include<stdio.h>
int main(){
	int n;
	int cubo;
	
	printf("Escreva um numero: ");
	scanf("%d",&n);
	
	cubo= n * n * n;
	
	printf("O cubo do numero %d eh: %d",n,cubo);
}
