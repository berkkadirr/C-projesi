#include <stdio.h>

int main(){
	
	int i;
	int sonuc;
	long int sayi;
	
	printf("Faktoriyelini almak istediginiz sayiyi giriniz : ");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++)
	{
		sonuc = sonuc * i;
	}
	
	printf("%d! = %ld",sayi,sonuc);
}
