/* security check */


#include <stdio.h>

void main() { 
	int i,j=0,n, a = 0; 
	scanf("%d", &a);
	j = j + a;
	for(i=0;i<a / 2 + 1;i++) { 
		for(n=0;n<=i;n++) {
			printf(" "); 
		} 
		for(n=j;n>0;n--) {
			printf("*");
		} 
		j=j-2;
		printf("\n");
	} 
}
