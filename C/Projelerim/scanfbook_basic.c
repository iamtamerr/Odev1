#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char ad[20],yazar[15],sayfa[3],tarih[4],basimev[10],tur[10];
	
	printf("Kitap Adi: ");
	scanf("%s",ad);
	
	printf("Yazar Adi: ");
	scanf("%s",yazar);
	
	printf("Sayfa Sayisi: ");
	scanf("%s",sayfa);
	
	printf("Basim Yili: ");
	scanf("%s",tarih);
	
	printf("Basim Evi: ");
	scanf("%s",basimev);
	
	printf("Kitap Turu: ");
	scanf("%s",tur);
	
	return 0;
}
