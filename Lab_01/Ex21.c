#include <stdio.h>
void exclamacoes(int num);
int main()
{
    int numero;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &numero);

    exclamacoes(numero);
    return 0;
}
void exclamacoes(int num) {
    for (int i = 1; i <= num; i++) {
        for(int j=1; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }
}