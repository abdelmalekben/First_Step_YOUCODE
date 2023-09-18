#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float A;
	float B;
	float S=0;
	printf("Entrer deux valeurs:");
	scanf("%f",&A);
	scanf("%f",&B);
	if (A==B){
		S=(A+B)*3;
		printf("le triple de leur somme est:%.2f",S);
	}
	else
	{
		printf("Entrer deux valeurs:");
	}
	
	
	
	
	return 0;
}
