#include<stdio.h>

main(){
	int a;
	int b,c,d,charge;
	
	printf("Enter Units :");
		scanf("%d",&a);
		
	if(a<50){
		b=(0.50)*a;
	printf("%d",b);
}

    else if(a>50){
	
	c=(0.75)*a +b;
	printf("%d",c);
}
else if(a>100){
	d=(1.20)*a +c;
	printf("%d",d);
}
else{
	charge = (d + 20);
	
	printf("%d",charge);
}
}
