#include <stdio.h>

int main(){
	
	
	
		int sayilar[10] = {23,11,41,32,33,76,19,48,91,10};
		int aranan;
		int konum;
		int i;
		char bulundu = 'h';

		
		printf("Kumedeki sayilar : ");
		for(i=0;i<10;i++){
			printf("\n%d",sayilar[i]);
		}
		
		printf("\nHangi sayiyi ariyorsunuz? : ");
		scanf("%d",&aranan);
		
		for(i=0;i<10;i++){
			if(sayilar[i] == aranan){
				bulundu = 'e';
				konum = i + 1;
				break;
			}
			
		}
		if(bulundu == 'e'){
			printf("\nSayi bulundu.Kumedeki sirasi : %d",konum);
		}
		else{
			printf("\nGirdiginiz sayi kumede yer almamakta.");
		}
		
		
	}
	
		

