#include<stdio.h>
#include<string.h>
main(){
	
	char a[100];
	char b[100];
	int z;
	printf("Enter Name:");
	scanf("%s",&a);
	
	strcpy(b,a);
	
	z=strcmp(strrev(b),a);
	
	if(z==0){
		
		printf("Function Is Palindrome");
		
	}
	
	else{
		
		printf("Function Is Not Palindrome");
	}
	
}
