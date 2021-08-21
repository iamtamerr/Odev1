#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int derece;
	
	printf("Su kac derece: ");
	scanf("%d",&derece);
	
	if (derece <= 0)
	{
		printf("Kati halde");
	}
	if (derece > 0 && derece < 100)
	{
		printf("Sivi halde");
	}
	else
	{
		printf("Gaz halde");
	}
	
	
	return 0;
}
