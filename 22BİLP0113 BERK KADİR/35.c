#include <stdio.h>

int main(){
	
	int sayi = 0;
	int sayac = 0;
	int n = 0;
	char asal = 'e';
	
	printf("Bir sayi girin : ");
	scanf("%d",&sayi);
	
	for(n=2; n<sayi; n++)
	{
		if(sayi % n == 0)
		{
			asal = 'h';
			break;
		}
	}
	
	if(asal == 'e')
	{
		printf("Girilen sayi bir asal sayi.Bu sayidan sonraki 10 asal sayi :  \n");
		
		sayi = sayi + 1;
		
		while(sayac < 10)
		{
			
			for(n=2; n<sayi; n++)
			{
				if(sayi % n == 0)
				{
					asal = 'h';
					break;
				}
				else{
					asal = 'e';
				}
				if(asal == 'e')
				{
					printf("%d\n",sayi);
					sayac++;
				}
				
				sayi++;
				
			}
		}
		
	}
	else
	{
		printf("Girilen sayi asal sayi degil.");
	}
	
	
}
