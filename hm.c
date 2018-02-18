#include <stdio.h>

void cikarma(int sayi1, int sayi2);

int main()
{
	int sayi1, sayi2;
	printf("1.Sayıyı Giriniz:");
	scanf("%d", &sayi1);
	printf("2.Sayıyı Giriniz:");
	scanf("%d", &sayi2);
	
	cikarma(sayi1, sayi2);
}

void cikarma(int sayi1,int sayi2)
{
	int cikarma;
	cikarma = sayi1 - sayi2;
	printf("%d-%d=%d", sayi1,sayi2,cikarma);

}

