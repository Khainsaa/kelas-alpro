//integral trapezoid
#include<stdio.h>

double f(double x){
    return 2*x+3;
}

main(){
    double a,b,h,sum=0,integral,x;
    int n;
    printf("Masukkan batas awal\na: ");
    scanf("%lf",&a);
    printf("Masukkan batas akhir\nb: ");
    scanf("%lf",&b);
    printf("Masukkan angka sub-intervalnya\nn: ");
    scanf("%ld",&n);
    h=(b-a)/n;
    int i;
    for(i=1;i<n;i++){
        x =a+i*h;
        sum=sum+f(x);

    }
    integral=h/2.0*(f(a)+2*sum+f(b));
    printf("\nIntegralnya adalah: %.2lf",integral);
}