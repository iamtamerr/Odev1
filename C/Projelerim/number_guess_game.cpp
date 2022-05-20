#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_game_header(void)
{
  printf("----------------------------------------------\n");
  printf("--------       NUMBER GUESS GAME      --------\n");
  printf("----------------------------------------------\n");
}

int *random_number(int digit)
{
	int *org_serie = (int*)malloc(sizeof(int)*digit);
	int count;
	srand(time(NULL));

	
    for(count=0; count<digit; count++){     
		org_serie[count] = rand()%10;  
		
		// Ýlk eleman 0 olmamasý için if blogu
		
        if(count == 0 && org_serie[0] == 0){
        	org_serie[0] = rand()%9 + 1;
		}
		
    }
    free(org_serie);
	return org_serie;
    
}

int *random_unique_number(int digit)
{
	int *org_serie = random_number(digit);
	int m,y,r,p;

	while(m < digit){
    	
        int r = rand()%10;

        for (y = 0; y < m; y++)
        {
            if(org_serie[y] == r){
                break;
            }
        }
	    if(y == m){
	        org_serie[m++] = r;
	    }
    }
	return org_serie;
}

int *guess_divider(int guess, int digit) 
{
    int *guess_serie = (int*)malloc(sizeof(int)*digit);
    int digitOfguess,i=1;
	
	
	while (guess > 0){  

        
        digitOfguess = guess % 10;  
        guess = guess / 10;   
        
		guess_serie[digit - i] = digitOfguess;
		i++;
	}
	free(guess_serie);
    return guess_serie;
}

int comparison(int *org_serie,int *guess_serie,int guess,int digit)
{
	int i,j;
	int counter1=0,counter2=0;
	
	for(i = 0; i < digit ; i++){
		for(j = 0; j < digit; j++){
				
			if(org_serie[i] == guess_serie[j] && i == j){
				counter1++;
			}
			else if(org_serie[i] == guess_serie[j] && i != j){
				counter2++;
			}
		}
	}	
	printf("+%d-%d\n", counter1,counter2);			
	if(counter1 == digit){
		counter1 = digit;
	}	
	else{
		counter1 = 0;
		counter2 = 0;				
	}
	return counter1;
}

void sorting(int guess_counter,int *guess_elements)
{
	int i,j,temp=0;
	for (i = 0; i < guess_counter; i++) {     
        for (j = i + 1; j < guess_counter; j++) {  
		   
           if(guess_elements[i] > guess_elements[j]) {    
               temp = guess_elements[i];    
               guess_elements[i] = guess_elements[j];    
               guess_elements[j] = temp;    
           }     
        }     
    }    
    
    printf("All guesses from smallest to largest:");
    
 	 for (i = 0; i < guess_counter; i++) {     
        printf("%d  ", guess_elements[i]);    
    }    
}

int main() {
	
	int counter1, digit, guess, i;
	int guess_counter=0, k=0;
	
	int *guess_serie;
	int *org_serie;
	int guess_elements[500];
	
	print_game_header();
	
	printf("Enter the number of digits for the game 4-10= ");
	scanf("%d",&digit);

	
	// Rastgele Sayý Üretir ve Sayýyý Tekrarsýz Yapar
    org_serie = random_unique_number(digit);
    
    	
	// Tahmin ve Kontrol Kýsmý	
	do{
		
		// Tahmin Yapýlan Bölüm
		printf("Enter a guess=");
		scanf("%d",&guess);
		
		guess_elements[k] = guess;
		
		i = 1; 
		
		// Tahmin Edilen Sayý Basamaklarýna Ayrýlýr ve Diziye Ekler
		int *guess_serie = guess_divider(guess, digit);
			
		i = 1; 
		
		// Üretilen Sayý ve Tahmin Arasýnda Karþýlaþtýrma Yapýlýr
		counter1 = comparison(org_serie, guess_serie, guess,digit);

		guess_counter++;
		k++;	
	}	
	while(counter1 != digit);
	
	printf("Congratz you won the game\n");
	printf("Total number of tries=%d\n", guess_counter);
	
	
		
	// Tahmin Edilen Sayýlarýn Sýralanýp Diziye Aktarýldýðý Kýsým	
	sorting(guess_counter,guess_elements);
      
		
	return 0;
}
