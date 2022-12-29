#include<stdio.h>

int main() {
	int n, i;
	char str[50];
	
	gets(str);
	
	n = strlen(str);
	
	for (i=n-1; i>=0; i--) {
		printf("%c", str[i]);
	}
	
	return 0;
}
