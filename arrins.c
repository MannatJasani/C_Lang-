#include<stdio.h>

int main () {
	int arr[50];
	int i, n, c, a;
	
	printf("Please Enter The Size Of Arr:");
	scanf("%d", &n);
	
	for (i=0;i<n;i++){
		printf("Please Enter The Value of arr %d:", i);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		printf("%d \n", arr[i]);
	}
	
	int i1;
	int new;
	
	printf("Please Enter The Index To update:");
	scanf("%d", &i1);
	
	printf("Please Enter The Value U Want to add:");
	scanf("%d", &new);
	
	int temp;
	
	n++;
		
	for (i = n; i > i1; i--) {
		arr[i] = arr[i-1];
	}
	arr[i1] = new;
	for (i = 0; i < n; i++) {
		printf("%d \n", arr[i]);
	}
	
	return 0;
}
