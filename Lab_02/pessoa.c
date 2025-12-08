#include <stdio.h>
#include "pessoa.h"

Pessoa criarPessoa(char nome[], int idade) {
    Pessoa nova;
    
    int i = 0;
    while (nome[i] != '\0' && i < 49) {
        nova.nome[i] = nome[i];
        i++;
    }
    nova.nome[i] = '\0';  
    
    nova.idade = idade;
    return nova;
}

void mostrarPessoa(Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}