// Fa�a um programa que receba tr�s notas de um aluno, calcule e mostre 
// a m�dia aritm�tica e a mensagem constante na tabela a seguir. Aos 
// alunos que ficaram para exame, calcule e mostre a nota que dever�o tirar 
// para serem aprovados, considerando que a m�dia exigida � 7,0.


#include <stdio.h> 
	int main() {
	int a, b, c;
	float soma, falta;
	printf("Insira as 3 notas \n");
	scanf("%d %d %d",&a,&b,&c);

	soma=(a+b+c)/3;
	falta = 7 - soma;


	if(soma > 3){
		if(soma > 7){
			printf("Aprovado\n");
		}else{
			printf("Exame: Deve tirar mais %2.2f para ser aprovado\n", falta);
		}
	}else{
		printf("Reprovado\n");
	}
	
	return (0); 
}
