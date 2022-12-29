#include<stdio.h>



int main () {
	int a, b = 1 ;
	int i;
	printf ("Please Enter The Number Your Want Factorial Of:");
	scanf("%d", &a); 


	for (i = 1; i <= a;i++){
		b = b*i;  
	}

	printf("Factorial: %d", b );
	
	return 0;
}
