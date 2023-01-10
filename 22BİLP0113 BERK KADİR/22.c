#include <stdio.h>

int main(){
	
	int sayi;
	int i;
	int sonuc;
	sonuc = 0; 
		
	printf("Bir sayi girin : ");
	scanf("%d",&sayi);
	
	for(i=2; i<sayi; i++)
	{
		if(sayi % i == 0)
		{
			sonuc = 1;
			break;
		}
		else
		{
			sonuc = 2;
		}
	}
	
	if(sonuc == 1)
	{
		printf("Girilen sayi bir asal sayi degildir.");
	}
	else if(sonuc == 2){
		printf("Girilen sayi bir asal sayidir.");
	}
	
}
