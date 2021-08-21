#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int misir = 2, kola = 2, su = 1, bilet = 8,toplam;
	
	printf("Satin alinan misir adedi: ");
	scanf("%d",&misir);
	
	printf("Satin alinan kola adedi: ");
	scanf("%d",&kola);
	
	printf("Satin alinan su adedi: ");
	scanf("%d",&su);
	
	printf("Satin alinan bilet adedi: ");
	scanf("%d",&bilet);
	
	toplam = misir*2 + kola*2 + su*1 + bilet*8;
	
	printf("Odemeniz gereken tutar %d TL.", toplam);

	
	
	
	
	
	return 0;
}
