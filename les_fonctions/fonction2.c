#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int summ(int x, int y ){
	int S=x+y ;
	
	printf("%d+%d=%d",x,y,S);
	return 0;
}


int main() {
		int x ,y ;

	printf("entrer N1:");
	scanf("%d",&x);
	printf("entrer N2:");
	scanf("%d",&y);
summ(x,y);

	return 0;
}
