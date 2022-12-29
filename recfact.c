#include<stdio.h>

int findfec(int a) {
	if (a > 1) {
		return a * findfec(a-1);
	} else {
		return 1;
	}
}

int main () {
	int a, b = 1 ;
	int i;
	printf ("Please Enter The Number Your Want Factorial Of:");
	scanf("%d", &a); 
	
	int ans;
	ans = findfec(a); // 5 * findfec(4)
	
	printf("%d", ans);

	return 0;
}
