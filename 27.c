#include <stdio.h>

int main (){
	int kuvvet;
	int sayi;
	int n;
	long int sonuc;
	sonuc=1;
	
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	printf("Kacinci kuvveti alinacak? : ");
	scanf("%d",&kuvvet);
	
	for(n=1; n<=kuvvet; n++)
	{
		sonuc = sonuc * sayi;
	}
	
	printf("%d Sayisinin %d.Kuvveti : %ld",sayi,kuvvet,sonuc);
}
