//Fa�a um programa que receba tr�s n�meros e mostre-os em ordem crescente. Suponha que o
// usu�rio digitar� tr�s n�meros diferentes.

#include <stdio.h> 
	int main() {
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	if(a > b){
		if(b > c){
			printf("%d %d %d\n", a, b, c);
		}else{
			if(a > c){
				printf("%d %d %d\n", a, c, b);
			}else{
				printf("%d %d %d\n", c, a, b);
			}
		}

	}else{
		if(a > c){
			printf("%d %d %d\n", b, a, a);
		}else{
			if(b > c){
				printf("%d %d %d\n", b, c, a);
			}else{
				printf("%d %d %d\n", c, b, a);
			}
			
		}
	}
	return (0); 
}
