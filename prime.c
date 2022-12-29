#include<stdio.h>
 
int main () {
	int n, i, c;
	int m;
	
	printf("Please Enter The Number You Want To Cheak:");
	scanf("%d", &n);
	9
	if (n == 2) {
		printf("The Number Is Prime\n");
	} else if (n > 1) {
		for (i = 2;i <= m; i++) {
			if (n % i == 0) {
				c = 1;
				break;
			} else  {
				c = 2;
			}
		}	 
	} else {
			printf("you entered number is below 1");
	}
	
	if (c == 1) {
		printf("The Number is not Prime");
	} else if (c == 2) {
		printf("The Number iS Prime");
	} 
	return 0;
}
