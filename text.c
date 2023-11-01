
#include <stdio.h>
struct array
{
    char nama[20], jurusan[15];
    int nim[15];
};

struct array m[20];
int i, j;

void main(){
    printf("Jumlah Mahasiswa: ");
    scanf("%d", &j);
    getchar();
    for (i = 0; i <=j-1; i++){
        printf("Data %d\n", i+1);
        printf("Nama: ");
        fflush(stdin); gets(m[i].nama);
        printf("NIM: "); gets(m[i].nim);
        printf("Jurusan: "); gets(m[i].jurusan);
    }
    printf("\n");
    printf("Data Mahasiswa Telkom University\n");
    for (i = 0; i <= j-1; i++){
        printf("%d. %s, %s, %s\n", i+1, m[i].nama, m[i].nim, m[i].jurusan);
    }
}