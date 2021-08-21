#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/*
	int i;

	while(i<=20)
	{
		if(i%2==0 && i!=14)
		{
			printf("%d\n",i);
		}
		i++;
	}
	*/
	
	int sayi,faktoriyel=1;
	
	printf("Faktoriyeli alinacak sayi: ");
	scanf("%d",&sayi);
	
	while(sayi>1)
	{

		faktoriyel *= sayi;
		sayi--;
	}
	printf("%d\n",faktoriyel);
	
	return 0;
}
