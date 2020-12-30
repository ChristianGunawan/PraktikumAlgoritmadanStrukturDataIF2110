#include <stdio.h>
int main ()

{
 int n, i, j, s, N;
 printf ("");
 scanf ("%d",&N);
 if (N>0 && N&1) {
 n = N / 2;
 for (i = 1; i <= n; i++)
 
 {
  for (j = n; j >= i; j--)
  printf (" ");
  
  for (s = 1; s <= i + (i - 1); s++)
  printf ("*");
  printf ("\n");
 }
  for (i = 0; i <= n; i++)
 {
  for (j = 1; j <= i; j++)
  printf (" ");
  for (s = 0; s >= (i - n) ; s--)
  printf ("*");
  for (s = 1; s <= (n - i) ; s++)
  printf ("*");
  printf ("\n");
 }
 }
 else
 {
     printf("Masukkan tidak valid");
 }
 
 
return 0;
}