#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d",&num1);
    printf("Digite um valor: ");
    scanf("%d",&num2);

    if (&num1 > &num2){
        printf("O conteudo do maior endereco eh: %d",num1);
    }else{
        printf("O conteudo do maior endereco eh: %d",num2);       
    }

    return 0;
}