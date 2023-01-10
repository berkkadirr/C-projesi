#include <stdio.h>

int main(){
	
	int i;
	
	printf("1 den 50 ye kadar olan sayilar : ");
	for(i=0;i<=50;i++){
		
		printf("%d ",i+1);
		
	}
	
	printf("\n1'den 50'ye kadar olan tek sayilar : ");
	for(i=0; i<=50; i++){
		
		if(i%2!=0){
			printf("\n%d",i);
		}	
	}
	printf("1'den 50'ye kadar olan cift sayilar : ");
	for(i=0; i<=50; i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}
	
	
	
}
