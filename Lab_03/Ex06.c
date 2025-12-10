#include <stdio.h>
void dobro(int *a, int *b);
int main()
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d",&num1);
    printf("Digite um valor: ");
    scanf("%d",&num2);

    dobro(&num1,&num2);
    printf("O dobro de a eh %d e o dobro de b eh %d",num1,num2);

    return 0;
}
void dobro(int *a, int *b){
    *a = 2 * *a;
    *b = 2 * *b;
}