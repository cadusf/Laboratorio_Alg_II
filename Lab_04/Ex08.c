#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *zero, contador_zero = 0, i;

    zero = (int*)calloc(1500, sizeof(int));
    for(i=0; i<1500;i++){
        if(*(zero+i) == 0){
            contador_zero ++;
        }
    }
    printf("O vetor contem %d zeros\n",contador_zero);

    for(i=0;i<1500;i++){
        *(zero+i) = i;
    }
    for(i=0;i<10;i++){
        printf("Vetor %d = %d\n",i,*(zero+i));
    }
    for(i=1490;i<1500;i++){
        printf("Vetor %d = %d\n",i,*(zero+i));
    }

    free(zero);

    return 0;
}