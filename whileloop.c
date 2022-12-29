#include<stdio.h>

int main () {
	
	char c1;
	
	c1 = 'A';
	printf("%c\n", c1);
	
	while (c1 <= 'Z'){
		c1++;
		printf("%c\n", c1);
	}
	
	return 0;
}
