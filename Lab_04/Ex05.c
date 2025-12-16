#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a= NULL, N, X, tamanho = 0;
    printf("Digite o tamanho do array: ");
    scanf("%d",&N);
    
    printf("Digite um numero para verificar seus multiplos: ");
    scanf("%d",&X);

    a = (int*) malloc (N*sizeof(int));
    for(int i=0; i<N; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", (a+i));
    }

    for(int i=0; i<N; i++){
        if(*(a+i) % X ==0){
            printf("%d ",*(a+i));
            tamanho ++;
        }
    }
    printf("\nSeu array possui %d numeros multiplos de %d",tamanho,X);

    free(a);

    return 0;
}