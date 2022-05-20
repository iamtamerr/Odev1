#include <stdio.h>
#include <stdlib.h>


int main() {
	
	 int sayi1,sayi2,sayac,sum=0;
	 int i,j;
	 
    printf("Limit 1: ");
    scanf("%d" ,&sayi1);
    
    printf("Limit 2: ");
    scanf("%d" ,&sayi2);

    for(i=sayi1 ; i<sayi2 ; i++){
    	
        sayac=0;
        
        for(j=2 ; j<i ; j++){
        	
            if(i%j == 0){
                sayac++;
            }
                    
        }
        
		if(sayac == 0 && sayi1 != 0 && sayi1 != 1 && i!=sayi1){            
			sum = i + sum;
        }
    }
    
	printf("Sum of prime numbers between two limits: %d", sum); 
	
	return 0;
}
