#include<stdio.h>
#include<string.h>

int main() {
	char str[50], a[5];
	int n, i, j;

	gets(str);
	n = strlen(str);
	
	for(i=0;i<n;i++){
		if (str[i] == ' ') {
			for (j=i; j<n; j++) {
				str[j]= str[j+1];
			}
		}
	}	
	
	puts(str);
	return 0;
}
