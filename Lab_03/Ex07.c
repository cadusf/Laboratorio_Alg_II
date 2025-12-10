#include <stdio.h>

void soma(int *a, int *b);
int main()
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d",&num1);
    printf("Digite um valor: ");
    scanf("%d",&num2);

    soma(&num1,&num2);
    printf("A = %d\nB = %d",num1,num2);

    return 0;
}
void soma(int *a, int *b){

    *a = *a + *b;
    
}