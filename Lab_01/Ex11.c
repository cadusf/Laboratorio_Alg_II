#include <stdio.h>

float calcular_media(float n1, float n2, float n3, char tipo);
int main() {
    float nota1, nota2, nota3;
    char tipo;
    
    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Digite A (aritmetica) ou P (ponderada): ");
    scanf(" %c", &tipo);
    
    float media = calcular_media(nota1, nota2, nota3, tipo);

    
    return 0;
}
float calcular_media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A' || tipo == 'a') {
        return (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P' || tipo == 'p') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    } 
}