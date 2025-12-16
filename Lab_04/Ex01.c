#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    a = (int*) malloc(5*sizeof(int));
    for (int i=0;i<5;i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", (a+i));
    } 
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    free(a);  

    return 0;
}