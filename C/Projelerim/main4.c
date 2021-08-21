#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	int bagaj,el,fk;
	
	printf("Bagaj Kilonuz: ");
	scanf("%d",&bagaj);
	
	printf("El Kilonuz: ");
	scanf("%d",&el);
	
	fk = ((bagaj - 15) + (el-8)) * 5;
	
	printf("Odemeniz gereken tutar %d TL",fk);
	
	
	
	
	
	return 0;
}
