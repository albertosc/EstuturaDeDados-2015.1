// Faça um programa que receba três notas e seus respectivos pesos,
// calcule e mostre a média ponderada.

#include <stdio.h> 
	int main() {
	int a, b, c;
	float soma;
	printf("Insira a nota do Trabalho de laboratorio \n");
	scanf("%d",&a);
	printf("Insira a nota do Avaliacao semestral \n");
	scanf("%d",&b);
	printf("Insira a nota do Exame final \n");
	scanf("%d",&c);

	soma=((a*2)+(b*3)+(c*5))/10;

	if(soma > 5){
		if(soma > 6){
			if(soma > 7){
				if(soma > 8){
					printf("A\n");
				}else{
					printf("B\n");
				}
			}else{
				printf("C\n");
			}
		}else{
			printf("D\n");
		}
	}else{
		printf("E\n");
	}
	
	return (0); 
}
