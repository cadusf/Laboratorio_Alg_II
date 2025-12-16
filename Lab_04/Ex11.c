#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
};

int main()
{
    struct Aluno *alunos = NULL;
    int n;
    
    printf("Quantos alunos? ");
    scanf("%d", &n);
    
    alunos = (struct Aluno*)malloc(n * sizeof(struct Aluno));
    
    for(int i=0; i<n; i++){        
        printf("Matricula do %d aluno: ",i+1);
        scanf("%d", &alunos[i].matricula);
        
        printf("Sobrenome do %d aluno: ",i+1);
        scanf("%s", alunos[i].sobrenome);
        
        printf("Ano de nascimento do %d aluno: ",i+1);
        scanf("%d", &alunos[i].ano_nascimento);
    }
    
    
    for(int i=0; i<n; i++){
        printf("Matricula do %d aluno: %d\n",i+1, alunos[i].matricula);
        printf("Sobrenome do %d aluno: %s\n",i+1,  alunos[i].sobrenome);
        printf("Ano nascimento do %d aluno: %d\n",i+1,  alunos[i].ano_nascimento);
        printf("\n"); 
    }
    
    free(alunos);
    return 0;
}