#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d",&num1);
    printf("Digite um valor: ");
    scanf("%d",&num2);

    if (&num1 > &num2){
        printf("O maior endereco eh: %p",&num1);
    }else{
        printf("O maior endereco eh: %p",&num2);       
    }

    return 0;
}