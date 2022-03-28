#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	int i,n,j;
	
	printf("Eleman Sayisi: ");
	scanf("%d",&n);
	
	int dizi[n];
	
	
	for(i=0;i<n;i++)
	{
		dizi[i] = i+1;
		printf("%d",dizi[i]);			
	}
	
	printf("\n");	
	
	for(j=1 ;j<n;j++)
	{
		
		for(i=0;i<n;i++)
		{
			if(dizi[i]==n)
			{
				dizi[i] = 1;	
			}
			else
				dizi[i] = dizi[i]+1;
			printf("%d",dizi[i]);
									
		}
		printf("\n");
	}
	
	return 0;
}
