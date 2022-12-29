#include<stdio.h>

int main() {
	int n, i, counter=0;
	char str[50];
	
	gets(str);
	
	n = strlen(str);
	
	for (i=0; i<n/2; i++) {
		if (str[i] == str[n-i-1]) {
			counter++;
		}
	}
	
	if (counter == i) {
		printf("Palindrom");
	} else {
		printf("Not Palindrom");
	}
	
	return 0;	
}
