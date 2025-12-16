#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double *vetor = NULL;
    int n;
    
    printf("Digite o tamanho do vetor (deve ser >=10): ");
    scanf("%d", &n);
    
    vetor = (double*)malloc(n * sizeof(double));
    
    srand(time(NULL));
    
    for(int i=0; i<10; i++){
        vetor[i] = rand() % 101;
    }
    
    printf("10 primeiros valores do vetor:\n");
    for(int i=0; i<10; i++){
        printf("vetor[%d] = %.2f\n", i, vetor[i]);
    }
    
    free(vetor);
    
    return 0;
}