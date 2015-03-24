// Faça um programa que receba um número inteiro e verifique se é par ou ímpar.


#include <stdio.h> 
#include <math.h>

	int main() {
	int tipo, primeiro, segundo, resultado;
	float raiz;

	printf("Menu de opções:\n");
	printf("1. Somar dois números.\n");
	printf("2. Subtrair dois números\n");
	printf("3. Multiplicar dois números\n");
	printf("4. Dividir dois números\n");
	printf("5. Raiz quadrada de um número\n");
	printf("Digite a opção desejada.\n");
	scanf("%d",&tipo);

	if(tipo == 1){
		printf("Insira os dois numeros para somar\n");
		scanf("%d %d", &primeiro, &segundo);
		resultado = primeiro + segundo;
		printf("O resultado da soma e: %d \n", resultado);
	}

	if(tipo == 2){
		printf("Insira os dois numeros para subtrair\n");
		scanf("%d %d", &primeiro, &segundo);
		resultado = primeiro - segundo;
		printf("O resultado da subtracao e: %d \n", resultado);
	}

	if(tipo == 3){
		printf("Insira os dois numeros para multiplicar\n");
		scanf("%d %d", &primeiro, &segundo);
		resultado = primeiro * segundo;
		printf("O resultado da multiplicacao e: %d \n", resultado);
	}

	if(tipo == 4){
		printf("Insira os dois numeros para divisao\n");
		scanf("%d %d", &primeiro, &segundo);
		resultado = primeiro / segundo;
		printf("O resultado da divisao e: %d \n", resultado);
	}

	if(tipo == 5){
		printf("Insira um numero para achar a raiz \n");
		scanf("%d", &primeiro);
		raiz = sqrt(primeiro);
		printf("O resultado da divisao e: %d \n", raiz);
	}

	

	return (0); 
}
