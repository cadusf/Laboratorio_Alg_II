#include <stdio.h>
#include "pessoa.h"

int main() {
    char nome[50];
    int idade;
    
    printf("Digite o nome: ");
    scanf("%s", &nome); 
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    Pessoa pessoa = criarPessoa(nome, idade);
    printf("Dados cadastrados:\n");
    mostrarPessoa(pessoa);
    
    return 0;
}