#include<stdio.h>

int main () {
	int arr[5] = {1, 2,- 4, 3, -5};
	int n, i, neg;
	
	for (i = 0; i < 5; i++) {
		if (arr[i] < 0) {
			//neg = arr[i];
			n++;
			printf("%d ", arr[i]);
			
		}
	}
	printf("\nNegs = %d", n);
	
	return 0;
}
