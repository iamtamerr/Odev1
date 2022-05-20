#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,limit,smallest,sayi[limit];
	
	printf("How many elements will you enter?: ");
	scanf("%d",&limit);
		
	
	for(i=0;i<limit;i++)
	{
		printf("Number %d: ",i+1);
		scanf("%d",&sayi[i]);
	}
	
	smallest = sayi[2];
	
	for(i=0;i<limit;i++)
	{
		if(smallest > sayi[i])
		{
			smallest = sayi[i];
		}
	}
	printf("Smallest: %d",smallest);
	
	return 0;
}
