#include <stdio.h>

int main(){
	
	int sayilar[5];
	int i;
	int j;
	int temp; //ge�ici de�er verebilmek i�in temp tan�ml�yoruz
	
	for(i=0; i<5; i++)
	{
		printf("%d.Sayiyi giriniz : ",i+1);
		scanf("%d",&sayilar[i]);
	}
	for(i=0; i<5; i++){
		
		for(j=i+1; j<5; j++){
			
			if(sayilar[i]>sayilar[j]){
				temp=sayilar[i]; // i.de�eri ge�ici de�ere veriyoruz
				sayilar[i]=sayilar[j]; //j.de�eri i.de�ere at�yoruz
				sayilar[j]=temp; //ge�ici de�erdeki i.de�eri j.de�ere veriyoruz
			}
		}
	}
	printf("Kucukten buyuge dogru siralama : ");
	for(i=0;i<5;i++){
		printf("\n%d",sayilar[i]);
	}
	
}
