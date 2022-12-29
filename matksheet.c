#include<stdio.h>

int totalma(int m, int p, int c) {
	int total;
	
	total = m + p + c;
	return total;
}

int grade(int i) {
	char g;
	if (i <= 100 && i >= 80) {
		g = 'A';
	} else if (i <= 80 && i >= 60) {
		g = 'B';
	} else if (i <= 60 && i >= 40) {
		g = 'C';
	} else if (i <= 40 && i >= 27) {
		g = 'D';
	} else if (i < 27) {
		g = 'F';
	} else {
		printf("please Enter The Right Value");
	}	
	return g;
}

int totalgr


int main () {
	int math, phy, chem, totalgr, total;
	char  g1, g2, g3;
	printf("Please Enter The marks Of Maths, Physics And Chemestry:");
	scanf ("%d %d %d", &math, &phy, &chem);
	int i;
	
	g1 = grade(math);
	g2 = grade(phy);
	g3 = grade(chem);
	
	total = totalma(math, phy, chem);
	
	
	printf("----------------Marksheet---------------\n");
	printf("Subject			  Marks			   Grade\n");
	printf("Maths               %d               %c \n", math, g1);
	printf("Physics             %d               %c \n", phy, g2);
	printf("Chemestry           %d               %c \n", chem, g1);
	printf("----------------------------------------\n");
	printf("Total = %d 								\n", total);
	printf("Overall Grade = %d\n", totalgr);	
	
	
	
	return 0;
}
