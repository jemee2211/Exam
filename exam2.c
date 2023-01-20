#include<stdio.h>

main(){
	int a;
	int b,c,d,charge;
	
	printf("Enter Units :");
		scanf("%d",&a);
		
		b=(0.50)*a;
	printf("%d",b);
	
	c=(0.75)*a +b;
	printf("%d",c);
	
	d=(1.20)*a +c;
	printf("%d",d);
	
	charge = (d + 20);
	
	printf("%d",charge);
	
}
