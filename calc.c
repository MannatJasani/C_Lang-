#include<stdio.h>
 
int calc(int i,int v1,int v2) {

	int ans;
	switch(i){
		case 1:
			ans = v1+v2;
			
			break;			
		
		case 2:
			ans = v1-v2;
			break;
		
		case 3:
			ans = v1*v2;
			break;
		default:
			printf("Your Number is Wrong");	
		
		return ans;
 	
 }
}
 
int main () {
	int ans1;
	int ans;
	printf(" Press 1 For sum\n Press 2 For Sub\n Press 3 for mul:");
	scanf("%d", &ans1);
	
	int a, b;
	printf("Please Enter Value a And Value b:");
	scanf("%d %d", &a, &b);
	 	
	switch(ans1){
		case 1:
			ans = calc(1, a, b);
			break;			
		
		case 2:
			ans = calc(2, a, b);
			break;
		
		case 3:
			ans = calc(3, a, b);
			break;
		default:
			printf("Your Number is Wrong:");
	}
	
	printf("Your Answer Is: %d", ans);
	
	
	return 0;
}
