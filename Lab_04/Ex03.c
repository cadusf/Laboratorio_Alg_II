#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, qntd_par = 0, qntd_impar = 0;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    a = (int*) malloc(n*sizeof(int));

    for (int i=0;i<n;i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", (a+i));

        if(*(a+i) % 2==0){
            qntd_par ++;
        }
        else{
            qntd_impar ++;
        }
    } 

    printf("Pares: %d\nImpares: %d",qntd_par,qntd_impar);
    
    
    free(a);  

    return 0;
}