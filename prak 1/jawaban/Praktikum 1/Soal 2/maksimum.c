/**
 * NIM       : 13516030
 * Nama      : Yonas Adiel Wiguna
 * Tanggal   : 24 Agustus 2017
 * Topik     : Pengenalan C
 * Deskripsi : Menampilkan maksimum dari 3 integer
 */

#include "stdio.h"

int main() {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d\n", (a > b) ? a : (b > c) ? b : c);
	
	return 0;
}
