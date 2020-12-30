#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
NIM : 13519108
NAMA : Nathaniel Jason
Tanggal : 27/08/2020
Topik Praktikum : Praktikum 1
Deskripsi : Menerima input dari pengguna berupa IP, memvalidasi input IP, memprint banyak mahasiswa
            Banyak yang lulus, yang tidak lulus, dan rata rata IP

*/


bool IsWithinRange (float X, float min, float max){
    return ((X >= min) && (X <= max));

}


int main()
{
    float IP, total = 0.0, totalIP = 0.0, mean;
    int TL = 0, L = 0;
    do{
        scanf("%f", &IP);
        if(IsWithinRange(IP, 0.0, 4.0)){
            total = total + 1.0;
            totalIP = totalIP + IP;
            if (IP >= 2.75){
                L = L + 1;
            }else{
                TL = TL + 1;
            }
        }

    } while (IP != -999.0);


    if (total == 0.0){
        printf("Tidak ada data");
    }else{
        printf("%d\n", (TL + L));
        printf("%d\n", L);
        printf("%d\n", TL);
        mean = totalIP / total;
        printf("%.2f", mean);
    }
    return 0;
}
