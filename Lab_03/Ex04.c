#include <stdio.h>

void troca(int *a, int *b);

int main()
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um valor: ");
    scanf("%d", &num2);
    
    printf("Antes: 1 numero = %d, 2 numero = %d\n", num1, num2);

    troca(&num1, &num2);
    
    printf("Depois: 1 numero = %d, 2 numero = %d\n", num1, num2);

    return 0;
}

void troca(int *a, int *b) {
    int i;  

    i = *a;   
    *a = *b;     
    *b = i;   
}