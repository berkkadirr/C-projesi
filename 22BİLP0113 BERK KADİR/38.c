#include <stdio.h>

int main(){
	
	int sayilar[5];
	int i;
	int j;
	int temp; //geçici deðer verebilmek için temp tanýmlýyoruz
	
	for(i=0; i<5; i++)
	{
		printf("%d.Sayiyi giriniz : ",i+1);
		scanf("%d",&sayilar[i]);
	}
	for(i=0; i<5; i++){
		
		for(j=i+1; j<5; j++){
			
			if(sayilar[i]>sayilar[j]){
				temp=sayilar[i]; // i.deðeri geçici deðere veriyoruz
				sayilar[i]=sayilar[j]; //j.deðeri i.deðere atýyoruz
				sayilar[j]=temp; //geçici deðerdeki i.deðeri j.deðere veriyoruz
			}
		}
	}
	printf("Kucukten buyuge dogru siralama : ");
	for(i=0;i<5;i++){
		printf("\n%d",sayilar[i]);
	}
	
}
