#include<stdio.h>
main(){
	
	int a,b,c,d;
	
	printf("Enter Number A:");
	scanf("%d",&a);
	
	printf("Enter Number B:");
	scanf("%d",&b);
	
	printf("Enter Number C:");
	scanf("%d",&c);
	
	printf("Enter Number D:");
	scanf("%d",&d);
	
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is Max");
			}
			else{
				printf("D is Max");
			}
		}
		else{
			if(c>d){
				printf("C is Max");
			}
			else{
				printf("D is Max");
			}
		}
		
	}
	else{
		if(b>c){
			if(b>d){
			printf("B is Max");	
			}
			else{
				printf("D is Max");
			}
		}
		else{
			if(c>d){
				printf("C is Max");
			}
			else{
				printf("D is Max");
			}
		}
	}
	
	
	
	
}
