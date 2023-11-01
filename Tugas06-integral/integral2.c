#include <stdio.h>

// Fungsi yang akan diintegrasikan
double f(double x) {
    return 4 * x + 3;
}

// Metode trapesium untuk menghitung integral
double trapezoidalIntegration(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = (f(a) + f(b)) / 2.0;

    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }

    return h * sum;
}

int main() {
    double a = 1.0; // Batas bawah integral
    double b = 5.0; // Batas atas integral
    int n = 100;   // Jumlah trapesium (semakin besar n, semakin akurat)

    double result = trapezoidalIntegration(a, b, n);
    printf("Hasil integral: %lf\n", result);

    return 0;
}