//NIM : 13519199
//Nama : CHRISTIAN GUNAWAN
//Tanggal : 27 AGUSTUS 2020
//Topik praktikum : C
//Deskripsi : MENGKONVERSI SUHU

#include <stdio.h>
int main()
{
    double input_suhu, suhu_akhir;
    char jenis_konversi; 

    scanf("%lf\n", &input_suhu);
    scanf("%s", &jenis_konversi);

    switch(jenis_konversi) 
    {
        case 'R' : 
        {
            suhu_akhir = (input_suhu * 4/5);
            break;
        }

        case 'K' : {
            suhu_akhir = input_suhu + 273.15;
            break;
        }

        case 'F' : {
            suhu_akhir = (input_suhu * 9/5) + 32;
            break;
        }
    }
    printf("%.2lf\n", suhu_akhir);

    return 0;
}