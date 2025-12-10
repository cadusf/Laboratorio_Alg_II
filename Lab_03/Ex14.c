#include <stdio.h>

void ler_notas(float *nota1, float *nota2);
void medias(float nota1, float nota2, float *media_s, float *media_p);

int main()
{
    float n1, n2, ms, mp;
    
    ler_notas(&n1, &n2);
    medias(n1, n2, &ms, &mp);
    
    printf("Simples: %.1f\nPonderada: %.1f", ms, mp);
    
    return 0;
}

void ler_notas(float *nota1, float *nota2)
{
    printf("Nota 1: ");
    scanf("%f", nota1);
    
    printf("Nota 2: ");
    scanf("%f", nota2);
}

void medias(float nota1, float nota2, float *media_s, float *media_p)
{
    *media_s = (nota1 + nota2) / 2;
    *media_p = (nota1 + nota2 * 2) / 3;
}
