#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sorteado[6], seu_bilhete[6], *correto=NULL, acertou=0, k = 0; 
    
    printf("Digite os 6 numeros gerados pela loteria: ");
    for(int i=0;i<6;i++){
        scanf("%d", (sorteado +i));
    }
    printf("Digite os 6 numeros do seu bilhete: ");
    for(int i=0;i<6;i++){
        scanf("%d", (seu_bilhete +i));
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){ 
            if(*(seu_bilhete+i) == *(sorteado+j)){
                acertou++;
                break;
            }
        }
    }

    correto = (int*)malloc(acertou * sizeof(int));

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(*(seu_bilhete+i) == *(sorteado+j)){
                *(correto+k) = *(sorteado+j); 
                k++;
                break; 
            }
        }
    }

    printf("Numeros sorteados: ");
    for(int i=0;i<6;i++){
        printf("%d ",*(sorteado+i));
    }
    printf("\nSeus acertos (%d numeros): ", acertou); 
    for(int i=0;i<acertou;i++){ 
        printf("%d ",*(correto+i));
    }
    printf("\n");

    free(correto);

    return 0;
}