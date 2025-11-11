#include <stdio.h>
int soma(int a, int b);
int main()
{
    int num1, num2;
    printf("Digite 2 numeros: ");
    scanf("%d %d",&num1,&num2);
    printf("A soma do intervalo entre os numeros eh: %d",soma(num1,num2));
    return 0;
}
int soma(int a, int b){
    int soma = 0;
    for(int i=a+1; i<b;i++){
        soma += i;
    }
    return soma;
}


