#include <stdio.h>
int main() {
<<<<<<< HEAD:Tugas04-BMI/bmi.c
    int pilihan, jenisKelamin;
    float tinggi, berat, bmi;
    //Input
	printf("===KALKULATOR BMI===\n");
	printf("1. Wanita\n2. Pria\n");
	printf("Pilihan: "); scanf("%d", &pilihan);
    //Proses percabangan
	switch (pilihan) {
		case 1:
        printf("Masukkan Tinggi Badan (Meter): ");
=======
    char jenisKelamin;
    float tinggi, berat, bmi, test;

    printf("===INPUT===\n");
    printf("Pilih Jenis Kelamin (P/Pria, W/Wanita): ");
    scanf(" %c", &jenisKelamin);

    switch (jenisKelamin) {
        case 'P':
        case 'p':
            printf("Masukkan Tinggi Badan (Meter): ");
>>>>>>> origin/main:kalkulator bmi
            scanf("%f", &tinggi);

            printf("Masukkan Berat Badan (Kilogram): ");
            scanf("%f", &berat);

            bmi = berat / (tinggi * tinggi);
            printf("===OUTPUT===\n");
            printf("BMI Anda: %.2f\n", bmi);

            if (bmi >= 17 && bmi <= 23) {
                printf("Badan Ideal\n");
            } else {
                printf("Badan Tidak Ideal\n");
            }
            break;
        case 2:
        printf("Masukkan Tinggi Badan (Meter): ");
            scanf("%f", &tinggi);

            printf("Masukkan Berat Badan (Kilogram): ");
            scanf("%f", &berat);

            bmi = berat / (tinggi * tinggi);
            printf("===OUTPUT===\n");
            printf("BMI Anda: %.2f\n", bmi);

            if (bmi >= 18 && bmi <= 25) {
                printf("Badan Ideal\n");
            } else {
                printf("Badan Tidak Ideal\n");
            }
            break;
            default :
            printf("Pilihan jenis kelamin tidak valid. \n");
            break;
    }
}