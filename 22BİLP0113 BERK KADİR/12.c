#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int not;
	
	printf("Notunuzu giriniz : ");
	scanf("%d",&not);
	
	if(not<50)
	{
		printf("Notunuz zayif.");
	}
	else if(not<75)
	{
		printf("Notunuz iyi.");
	}
	else
	{
		printf("Notunuz cok iyi.");
	}
	return 0;
}
