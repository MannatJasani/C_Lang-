#include<stdio.h>

void main () {
	int i;
	int a = 0, b = 1, c;
	
	c = a + b; // c = 1
	
	printf("Fibonaci = %d, %d, ", a, b);
	
	for (i = 3; i <= 8;i++){
		printf("%d, ", c);  
		a = b;  // a = 1 // a = 1	// a = 2  // a = 3 // a = 5
		b = c; // b = 1 // b = 2	// b = 3 // b = 5 // b = 8
		c = a + b; // c = 1 + 1 = 2 // c = 1 + 2 = 3  // c = 2 + 3 = 5 // c = 3 + 5 = 8 //c = 5 + 8 = 13
	}
	
	
	
}

