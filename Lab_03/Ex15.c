#include <stdio.h>

int main() 
{

    int numero = 10;
    int *d = &numero;  
    *d = 8;
    printf("Valor: %d\n", numero);      // 10
    printf("Endereco: %p\n", &numero);  // Endereço
    printf("Via ponteiro: %d\n", *d;   // 10 (usando *)

    return 0;
}
'int vetor[3] = {10, 20, 30};

MEMÓRIA:
Endereço   Valor   Como acessar
0x100      10      vetor[0], *vetor, *(vetor+0)
0x104      20      vetor[1], *(vetor+1)  
0x108      30      vetor[2], *(vetor+2)

int *p = vetor;  // p = 0x100
p++;            // p = 0x104 (agora aponta para 20)
'