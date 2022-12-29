#include<stdio.h>

void main () {
	int i, n, arr[50], pos;
	
	printf("Enter The Size Of An Array:");
	scanf("%d", &n);
	
		
	for (i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	
	printf("Please Enter The element Position:");
	scanf("%d", &pos);
	
	n--;
	pos-=1;
	for (i = pos; i < n; i++) {
		arr[i] = arr[i + 1];
	}
	for (i = 0; i < n; i++) {
		printf("%d \n\", arr[i]);
	}
	
}
