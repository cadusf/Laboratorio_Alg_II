#include <stdio.h>
int elevacao(int x, int z);
int main()
{
    int valor, elevado;
    printf("Digite o valor e o numero da elevacao: ");
    scanf("%d %d",&valor, &elevado);
    printf("%d ^ %d = %d", valor, elevado, elevacao(valor,elevado));
    return 0;
}
int elevacao(int x, int z){
    int elevacao = 1;
    for (int i =1; i<=z;i++){
        elevacao *= x;
    }
    return elevacao;
}