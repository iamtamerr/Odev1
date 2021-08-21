#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int  i,sayac;
	sayac = 0;
	for(i=1;i<=41;i+=4)
	{
		sayac = i + sayac;
	}
	printf("%d",sayac);
	
	return 0;
}
