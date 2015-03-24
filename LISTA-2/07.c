// Faça um programa que receba um número inteiro e verifique se é par ou ímpar.


#include <stdio.h> 
	int main() {
	int inteiro;
	scanf("%d",&inteiro);

	resto = inteiro % 2;
	if(resto == 0){
		printf("PAR\n");
	}else{
		printf("IMPAR\n");
	}

	

	return (0); 
}
