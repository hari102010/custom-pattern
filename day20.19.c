#include<stdio.h>
void main(){
	int i,j,c=1,n;
	
	printf("enter the no of lines\n");
	scanf("%d",&n);
	
	printf("floyd is triangle\n");
	
	for(i=1 ; i<=n ; i++){
		for(j=1 ; j<=i ; j++,c++){
			printf("%4d",c);
		}
		printf("\n");
	}
}
