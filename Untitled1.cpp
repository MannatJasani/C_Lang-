#include<stdio.h>

int main () {
	
	int a ,b ,c;
	
	printf("Please Enter The Value Of A:");
	scanf("%d",&a);
	
	printf("Please Enter The Value Of B:");
	scanf("%d",&b);
	
	c = a + b;
	
	if (c > 5) {
		printf("The Sum Of Both Smaller Then 5 \n And = %d", c);
	} else if (c < 5) {
		printf ("The Sum Of Both Bigger Then 5 \n And = %d", c);
	} else {
		printf("Please Enter The Right Value");
	}
	
	return 0;
}
