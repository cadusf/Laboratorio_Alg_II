#include <stdio.h>

int quadrado(int num);
int main()
{
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
     if (quadrado(numero) == 1) {
        printf("%d eh um quadrado perfeito!\n", numero);
    } else {
        printf("%d nao eh um quadrado perfeito!\n", numero);
    }
    return 0;
}
int quadrado(int num){
    if (num<0){
        return 0;
    }
    for (int i = 0; i * i <= num; i++) {
        if (i * i == num) {
            return 1;
        }
    }
    return 0;
}