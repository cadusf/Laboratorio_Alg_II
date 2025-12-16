#include <stdio.h>
#include <stdlib.h>

int main() {
    int *memoria;
    int tamanho, opcao, pos, val;
    
    printf("Quantos inteiros na memoria? ");
    scanf("%d", &tamanho);
    
    memoria = (int*)calloc(tamanho, sizeof(int)); 
    
    do {
        printf("\n1. Escrever\n2. Ler\n3. Sair\nOpcao: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            printf("Posicao (0 a %d): ", tamanho-1);
            scanf("%d", &pos);
            if (pos >= 0 && pos < tamanho) {
                printf("Valor: ");
                scanf("%d", &val);
                memoria[pos] = val;
            }
        }
        else if (opcao == 2) {
            printf("Posicao (0 a %d): ", tamanho-1);
            scanf("%d", &pos);
            if (pos >= 0 && pos < tamanho) {
                printf("Memoria[%d] = %d\n", pos, memoria[pos]);
            }
        }
        
    } while (opcao != 3);
    
    free(memoria);
    return 0;
}