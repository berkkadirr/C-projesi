#include <stdio.h>

int main (){
	
	int n;
	int sayi;
		
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	for (n=1; n<=10; n++)
	{
		
		printf("\n%d * %d = %d",sayi,n,(sayi*n));
		
	}	
	
	
}
