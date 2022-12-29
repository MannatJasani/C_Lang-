#include<stdio.h>

int main () {
	int n, i, f;
	
	printf ("Please Enter The Number:");
	scanf("%d", &n);
	
	while (n != 0) {
		i = n % 10; // 4 
		f = f * 10 + i; // 4
		n /= 10;
	}
	
	printf("Rev Number = %d", f);
	
	return 0;
}
