#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = NULL;
    int num, cont = 0;
    
    vetor = (int*)malloc(1 * sizeof(int));
    
    printf("Digite numeros (negativo para parar):\n");
    
    while(1){
        printf("Numero %d: ", cont+1);
        scanf("%d", &num);
        
        if(num < 0){
            break;
        }
        
        vetor[cont] = num;
        cont++;
        
        vetor = (int*)realloc(vetor, (cont+1) * sizeof(int));
    }
    
    printf("\nVetor lido:\n");
    for(int i=0; i<cont; i++){
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    return 0;
}