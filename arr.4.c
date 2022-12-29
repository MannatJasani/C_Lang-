#include<stdio.h>

int main () {
	int arr[4] = {1, 2, 3, 4};
	int i, n, c;
	
	for (i = 0; i < 4; i++) {
		printf("%d \n", arr[i]);
	}	
	printf("Please Enter The Index Of array U Want Update:");
	scanf("%d", &c);
	
	printf("Please Enter The Value You Want To Enter:");
	scanf("%d", &n);
	
	arr[c] = n;
	
	for (i = 0; i < 4; i++) {
		printf("%d \n", arr[i]);
	}	
	return 0;
}
