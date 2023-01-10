#include <stdio.h>

int main(){
	
	int sayilar[10];
	int sayac;
	int max = 0;
	int min;
	
	for(sayac=1; sayac<=10; sayac++)
	{
		printf("%d.Sayiyi giriniz : ",sayac);
		scanf("%d",&sayilar[sayac]);
		
		if(sayac==0)
		{
			min = sayilar[0];
		}
		
		if(sayilar[sayac]>max)
		{
			max = sayilar[sayac];
		}
		if(sayilar[sayac]<min)
		{
			min = sayilar[sayac];
		}
		
	}
	
	printf("En buyuk sayi : %d, En kucuk sayi : %d",max,min);
	
	
	
}
