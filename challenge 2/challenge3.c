#include <stdio.h>
#include <stdlib.h>

/* Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire

 */

int main() {
	int A;
	
	printf("Entrer un entier:");
	scanf("%d",&A);
	
	if (A%2==0){
	
	printf("l'entier %d est:paire",A);
	}
	else {

		printf("l'entier %d est:impaire ",A);	
		}

	
	
	return 0;
}
