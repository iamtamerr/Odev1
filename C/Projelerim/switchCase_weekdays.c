#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i;
	
	printf("Haftanin gun sayisi: ");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1: printf("Pazartesi"); break;
		case 2: printf("Sali"); break;
		case 3: printf("Carsamba"); break;
		case 4: printf("Persembe"); break;
		case 5: printf("Cuma"); break;
		case 6: printf("Cumartesi"); break;
		case 7: printf("Pazar"); break;
		default : printf("Gecersiz giris");
	}
	
	
	return 0;
}
