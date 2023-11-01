#include <stdio.h>
int i,j,b,k,m[50][50];
int determinan;
int tambah;
int main() {
printf("Jumlah Baris = ");
scanf("%d",&b);
printf("Jumlah Kolom = ");
scanf("%d",&k);
printf("Matriks 1 \n");
for (i=0; i<=b-1;i++){
for (j=0; j<=k-1;j++){
printf("Isi baris %d, kolom %d=",i+1,j+1);
scanf("%d",&m[i][j]);
}
}
determinan = m[0][0]*(m[1][1]*m[2][2]-m[1][2]*m[2][1])-m[0][1]*(m[1][0]*m[2][2]-m[1][2]*m[2][0])+m[0][2]*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);
tambah = determinan - m[2][2];
printf("\nDeterminan Matriks =%d", determinan);
printf("\nHasil dari determinan matriks dikurang baris 3 kolom 3 pada matriks adalah %d", tambah);
return 0;
}