#include <stdio.h>
#include "mstring.h"

int main() {
    char texto1[100], texto2[100], copia[100];
    int opcao;
    
    printf("Digite uma palavra: ");
    scanf("%s", texto1);
    
    do {
        printf("\n1-Tamanho da string\n");
        printf("2-Copiar string\n");
        printf("3-Concatenar strings\n");
        printf("4-Comparar strings\n");
        printf("5-Converter para maiusculas\n");
        printf("6-Converter para minusculas\n");
        printf("7-Contar vogais\n");
        printf("8-Verificar se eh palindromo\n");
        printf("9-Remover espacos\n");
        printf("0-Sair\n");
        printf("Escolha qual operacao deseja fazer: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1: {
                int t = mstrlen(texto1);
                printf("Tamanho: %d\n", t);
                break;
            }
            
            case 2: {
                mstrcpy(copia, texto1);
                printf("Copia: %s\n", copia);
                break;
            }
            
            case 3: {
                printf("Digite outra palavra: ");
                scanf("%s", texto2);
                mstrcat(texto1, texto2);
                printf("Resultado: %s\n", texto1);
                break;
            }
            
            case 4: {
                printf("Digite uma palavra para comparar: ");
                scanf("%s", texto2);
                int r = mstrcmp(texto1, texto2);
                if (r == 0) {
                    printf("As strings sao iguais\n");
                } else if (r < 0) {
                    printf("'%s' vem antes de '%s'\n", texto1, texto2);
                } else {
                    printf("'%s' vem depois de '%s'\n", texto1, texto2);
                }
                break;
            }
            
            case 5: {
                mstrupper(texto1);
                printf("Em maiusculas: %s\n", texto1);
                break;
            }
            
            case 6: {
                mstrlower(texto1);
                printf("Em minusculas: %s\n", texto1);
                break;
            }
            
            case 7: {
                int v = mcount_vogais(texto1);
                printf("Numero de vogais: %d\n", v);
                break;
            }
            
            case 8: {
                int p = meh_palindromo(texto1);
                if (p == 1) {
                    printf("A string eh um palindromo\n");
                } else {
                    printf("A string nao eh um palindromo\n");
                }
                break;
            }
            
            case 9: {
                mremove_espacos(texto1);
                printf("String sem espacos: %s\n", texto1);
                break;
            }
            
            case 0: {
                printf("Programa encerrado\n");
                break;
            }
            
            default: {
                printf("Opcao invalida!\n");
                break;
            }
        }
        
    } while(opcao != 0);
    
    return 0;
}