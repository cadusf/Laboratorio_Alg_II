#include <stdio.h>
int dobro(int num1){
    int resultado;
    resultado = num1 * 2;
    return resultado;
}
int main()
{
    int valor;
    scanf("%d",&valor);
    printf("%d",dobro(valor));
    return 0;
}