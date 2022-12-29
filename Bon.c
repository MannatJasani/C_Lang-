#include<stdio.h>

int main () {
	
	char g[4];
	int sal[4] , a, b;
	
	for(a = 0;a <= 4;a++){
		printf("Please Enter Your Gender In M Or F:");
		scanf(" %c", &g[a]);
		printf("Please Enter Your Salary:");
		scanf(" %d", &sal[a]);
		
		if (g[a] == 'M') {
			if (sal[a] <= 10000) {
				sal[a] = sal[a] + sal[a]* 12 / 100;
			} else {
				sal[a] = sal[a] + sal[a]* 10 / 100;
			}
		}
		else if (g[a] == 'F') {
			if (sal[a] <= 10000) {
				sal[a] = sal[a] + sal[a]* 13 / 100;
			} else {
				sal[a] = sal[a] + sal[a]* 10 / 100;
			}
			
		}
	}
	
	for (b = 0;b <= 4;b++) {
		printf ("Salary Of Person %d : %d\n", b, sal[b]);
	}
	
	
	
	
	return 0;
}
