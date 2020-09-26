#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct sisi {
	int panjang;
	int lebar; 
	int tinggi;
	int alas;
}; typedef struct sisi sisi;


int main(int argc, char *argv[]) {
	sisi p;
	sisi *ps;
	
	printf("Masukkan Nilai Panjang : ");
	scanf("%i",&p.panjang);
	printf("Masukkan Nilai Lebar : ");
	scanf("%i",&p.lebar);
	printf("Masukkan Nilai Tinggi : ");
	scanf("%i",&p.tinggi);
	printf("Masukkan Nilai Alas : ");
	scanf("%i",&p.alas);
	
	ps = &p;
	
	printf("\nNilai Panjang : %i\n", ps->panjang);
	printf("Nilai Lebar : %i\n", ps->lebar);
	printf("Nilai Tinggi : %i\n", ps->tinggi);
	printf("Nilai Alas : %i\n", ps->alas);
	return 0;
}
