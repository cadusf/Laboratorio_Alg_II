#include <stdio.h>
int primo(int num);
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    printf("Existem %d numeros primos abaixo de %d", primo(numero), numero);
    return 0;
}
int primo(int num){
 int quantidade = 0;
    
    for (int i = 2; i < num; i++) {
        int primo = 1, divisor = 2;
        
        while (divisor * divisor <= i && primo == 1) {
            if (i % divisor == 0) {
                primo = 0;
            }
            divisor++;
        }
        
        if (primo == 1) {
            quantidade++;
        }
    }
    
    return quantidade;
}