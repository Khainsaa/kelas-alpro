#include <stdio.h>
#include <string.h>
main(){
char nama[20], temp;
int n;
printf("Masukkan kata:");
scanf("%s", &nama);
n = strlen(nama);
temp = nama[0];
nama[0] = nama[n - 1];
nama[n - 1] = temp;
printf("Setelah penukaran: %s\n", nama);
}