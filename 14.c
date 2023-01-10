#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int gun;
	printf("Bir gun numarasi giriniz : ");
	scanf("%d",&gun);
	
	if ( gun == 1 )
	printf ("\n Pazartesi");
	else if ( gun == 2 )
	printf("\n Sali");
	else if (gun == 3 )
	printf ("\n Carsamba");
	else if ( gun == 4 ) 
	printf ("\n Persembe");
	else if ( gun == 5 )
	printf ("\n Cuma");
	else if ( gun == 6 )
	printf ("\n Cumartesi");
	else if ( gun == 7 )
	printf("\n Pazar");
	else
	printf("\n Gecersiz gun numarasi");	
	
	return 0;
}
