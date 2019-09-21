#include <stdio.h>
void carpma(int sayi1,int sayi2);
 
int main()
{		int sayi1,sayi2;
		printf("Çarpma işlemi için sayıları giriniz:");
		scanf("%d %d",&sayi1,&sayi2);
		carpma(sayi1,sayi2);
 //carpma islemi fonksiyonu
	
}
 void carpma(int sayi1,int sayi2)
{
	int carpim;
	carpim=sayi1*sayi2;
	printf("%d",carpim);
}
