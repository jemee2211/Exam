#include<stdio.h>

void div(int a){
	
	if(a%3 == 0 && a%5 == 0){
		
		printf("A is divisible by 3 & 5");
	}
	else{
		
		printf("A is not divisible by 3 & 5");
	}
	
	
	
}
main(){
	
	int b;
	
	printf("Enter A:");
	scanf("%d",&b);
	
	div(b);
	
	
	
}
