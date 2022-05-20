#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,j, yildiz = 1 , yildizsag = 5 , yildizorta = 6 , satir=11, bosluk = 1 , sag=0;
	
	
	for(i=0;i<satir;i++){
		if (i < satir/2){
			for(j=1;j<yildiz;j++){
				printf("*");
			}
			for(j=0;j<bosluk;j++){
				printf(" ");
			}			
			for(j=0;j<yildizorta;j++){
				printf("*");
			}
			for(j=0;j<yildizsag;j++){
				printf("*");	
			}
			for(j=0;j<bosluk;j++){
				printf(" ");
			}
			for(j=0;j<sag;j++){
				printf("*");
			}
			printf("\n");
			yildiz++;
			yildizorta--;
			yildizsag--;
			sag++;
			
		}
		else  {
			for(j=1;j<yildiz;j++){
				printf("*");	
			}			
			for(j=0;j<bosluk;j++){
				printf(" ");
			}
			for(j=0;j<yildizorta;j++){
				printf("*");
			}
			for(j=0;j<yildizsag;j++){
				printf("*");	
			}
			for(j=0;j<bosluk;j++){
				printf(" ");
			}
			for(j=0;j<sag;j++){
				printf("*");
			}
			printf("\n");
			yildiz--;
			yildizorta++;
			yildizsag++;
			sag--;
		}
			
	}
		
	
	return 0;
}
