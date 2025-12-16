#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    a = (int*) malloc(n*sizeof(int));

    for (int i=0;i<n;i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", (a+i));
    } 

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    free(a);  

    return 0;
}