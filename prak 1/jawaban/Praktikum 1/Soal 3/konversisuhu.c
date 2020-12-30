/**
 * NIM       : 13516030
 * Nama      : Yonas Adiel Wiguna
 * Tanggal   : 24 Agustus 2017
 * Topik     : Pengenalan C
 * Deskripsi : Melakukan konversi suhu dari Celcius ke permintaan user
 */

#include "stdio.h"

int main() {
	float c;
	char tipe;
	
	scanf("%f %c", &c, &tipe);
	
	printf("%.2f\n", (tipe == 'R') ? c*4/5 : (tipe == 'F') ? c*9/5+32 : c+273.15);
	
	return 0;
}
