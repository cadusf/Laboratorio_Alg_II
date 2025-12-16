#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

int main()
{
    float numero, fracio;
    int inteira;
    
    printf("Numero: ");
    scanf("%f", &numero);
    
    frac(numero, &inteira, &fracio);
    
    printf("Inteiro: %d\nFracionario: %.2f", inteira, fracio);
    
    return 0;
}

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}