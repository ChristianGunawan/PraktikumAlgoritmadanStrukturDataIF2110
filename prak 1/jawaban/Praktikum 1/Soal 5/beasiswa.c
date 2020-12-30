/**
 * NIM       : 13517131
 * Nama      : Jan Meyer Saragih
 * Tanggal   : 27 Agustus 2020
 * Topik     : Pengenalan C
 * Deskripsi : Mengkategorikan berdasarkan input ip dan pot
 */

#include "stdio.h"

int main() {
  float ip;
  float pot;

  scanf("%f", &ip);
  scanf("%f", &pot);

  if (ip >= 3.5) {
    printf("4\n");
  } else if (pot < 1 && ip < 3.5) {
    printf("1\n");
  } else if (pot >= 1 && pot < 3.5) {
    if (ip >= 2.0) {
      printf("3\n");
    } else {
      printf("2\n");
    }
  } else {
    printf("0\n");
  }

  return 0;
}
