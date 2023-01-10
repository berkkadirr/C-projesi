#include <stdio.h>

int main(){
	 
	int sayilar[10] = {7,12,45,23,66,42,11,27,98,71};
	int i;
	char asal;
	int j;
	
	printf("Cift sayilar : ");
	
	for(i=0;i<10;i++){
		if(sayilar[i] % 2 == 0){
			printf("\n%d",sayilar[i]);
		}
	}
	
	printf("\nTek sayilar : ");
	for(i=0;i<10;i++){
		if(sayilar[i] % 2 != 0){
			printf("\n%d",sayilar[i]);
		}
	}
	
	printf("\nAsal sayilar : ");
	for(i=0;i<10;i++){
		
		for(j=2;j<sayilar[i];j++){
			if(sayilar[i] % j != 0){
				asal = 'e';				
			}
			else{
				asal = 'h';
				break;
			}
		}
		
		if(asal=='e'){
			printf("\n%d",sayilar[i]);
		}
			
		
		
	}
}
