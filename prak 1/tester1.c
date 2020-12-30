  
#include <stdio.h>
#include <conio.h>

main()
{
float celcius;
float fahrenheit;
float reamur;
celcius=0;
printf("KONVERSI SUHU CELCIUS KE FAHRENHEIT""\n""masukan data celcius yang akan dikonversi: ");
scanf("%f",&celcius);
   fahrenheit=celcius*1.8+32;
   reamur=celcius*0.8;
   printf("jadi %2.4f celcius adalah %2.4f fahrenheit dan %2.4f reamur",celcius,fahrenheit,reamur);
    getch();
}