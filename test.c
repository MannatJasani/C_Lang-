#include<stdio.h>
int fact(int);

int main () {
	int x, n;
	
	printf("Enter The Number:");
	scanf("%d", &n);
	
	x = fact(n);
	printf("Factorial Of %d = %d\n", n, x);
	return 0;
}

int fact (int n) {
	if (n==0) 
		return (1);
		return (n*fact(n-1));
}
