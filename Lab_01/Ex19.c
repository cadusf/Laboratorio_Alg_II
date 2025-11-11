#include <stdio.h>

int fatorial(int num);
int main()
{
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&numero);
    printf("%d! = %d", numero, fatorial(numero));
    return 0;
}
int fatorial(int num){
    int fatorial = 1;
    for(int i=num; i>=1; i--){
        fatorial *= i;
    }
    return fatorial;
}