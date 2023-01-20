#include<stdio.h>
main(){
	
	int n;
	int i;
	int j ;
	int sum =0;
	printf("Enter Number:");
	scanf("%d",&n);
	
	int a[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
		
		
	printf("Enter Value:");
	scanf("%d",&a[i][j]);
}

}
    for(i=0; i<n; i++){
		for(j=0; j<n; j++){
    if(i==j){
    	
    	sum+=a[i][j];
    	printf("sum:%d",sum);
    	
	

	}
}
	printf("\n");
}
}
