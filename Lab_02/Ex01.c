#include <stdio.h>
#include "operacoes.h"

int main(){
    int x,y,num;
    printf("Escolha o primeiro numero: ");
    scanf("%d",&x);
    printf("Escolha o segundo numero: ");
    scanf("%d",&y);
    printf("1-soma\n2-subtracao\n3-multiplicacao\n4-divisao\nEscolha qual operacao deseja fazer: ");
    scanf("%d",&num);

    switch (num){
    case 1:
        printf("%d",soma(x,y));
        break;

    case 2:
        printf("%d",subtrai(x,y));
        break;

    case 3:
        printf("%d",multiplica(x,y));
        break;

    case 4:
        printf("%d",divide(x,y));
        break;

    default:
        printf("opcao invalida!");
        break;
    }

    return 0;
}