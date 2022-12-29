#include<stdio.h>

void main () {
	int arr[5] = {1,2,3,4,6};
	
	int i;
	
	for (i = 0; i < 5; i++) {
		
		if (arr[i]%2 == 0) {
			printf("%d ", arr[i]);
		}
		
	}
	
}
