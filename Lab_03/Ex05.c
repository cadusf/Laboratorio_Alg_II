#include <stdio.h>

void organiza(int *a, int *b);

int main()
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um valor: ");
    scanf("%d", &num2);
    
    troca(&num1, &num2);
    
    return 0;
}

void organiza(int *a, int *b) {
    int i;  
    if (*a < *b){
        i = *a;   
        *a = *b;     
        *b = i;
        printf("o maior valor eh a: %d e o menor eh b: %d", *a,*b);
    }else{
        printf("o maior valor eh a: %d e o menor eh b: %d", *a,*b);
    }
}