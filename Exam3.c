#include<stdio.h>
#include<string.h>
	struct data{
		
		int rollno;
		char name[100];
		char address[100];
		
		
	};
	
main(){
	int i;
	struct data j;
	
	j.rollno;
	j.name;
	j.address;
	
	
	for(i=0; i<5; i++){
		
		printf("Enter Student Roll No. :");
		scanf("%d",&j.rollno);
		
		printf("Enter Student Name :");
		scanf("%s",&j.name);
		
		printf("Enter Student Roll No. :");
		gets(j.address);
	}
	
	

	
}
