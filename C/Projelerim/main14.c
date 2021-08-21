#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/*
	int i;
	
	for(i=1;i<=100;i++)
	{
		if (i%5==0)
		{
			printf("%d\n",i);
		}
	}
	*/
	
	int sayi,yuz,on,bir;
	
	printf("Sayi Girin:");
	scanf("%d",&sayi);
	
	yuz = sayi / 100;
	on = sayi / 10 - yuz*10;
	bir = sayi % 10;
	
	printf("%d\n",yuz);
	printf("%d\n",on);
	printf("%d\n",bir);
	
	
	return 0;
}
