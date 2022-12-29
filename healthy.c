#include<stdio.h>

int main () {
	
	int a, h[4], w[4];
	
	for(a = 0;a <= 4;a++) {
		printf("\nPlease Enter Your Height:");
		scanf(" %d", &h[a]);
		printf("\nPlease Enter Your Weight:");
		scanf(" %d", &w[a]);
		
			if (h[a] >= 170) {
				if (w[a] >= 50) {
					printf("Student%d Is healthy ", a);
				}
				else {
					printf("Student%d Is  not healthy ", a);
				} 
			} else{
				printf("Student%d Is  not healthy ", a);
			}
	}
	return 0;
}
