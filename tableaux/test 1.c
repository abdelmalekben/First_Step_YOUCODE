#include <stdio.h>
#include <stdlib.h>

/* D�clarer un tableau et l'afficher */

int main() {
	int i, n=10;
	int tableau[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<n;i++) {
	printf("%d\t",tableau[i]);
	}
	return 0;
}
