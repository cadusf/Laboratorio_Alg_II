#include <stdio.h>
#include <stdlib.h>

struct Produto{
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};

int main()
{
    struct Produto *p = NULL;
    int N,i, maior_quantidade = 0;
    float maior_preco = 0.0;
    char nome_quantidade[50],nome_preco[50];

    printf("Digite o tamanho do conjunto: ");
    scanf("%d",&N);

    p = (struct Produto*)malloc(N*sizeof(struct Produto));
    
    for(i=0;i<N;i++){
        printf("Digite o Codigo do %d produto: ",i+1);
        scanf("%d",&p[i].codigo);
        printf("Digite o Nome do %d produto: ",i+1);
        scanf("%s",p[i].nome);
        printf("Digite a Quantidade no estoque do %d produto: ",i+1);
        scanf("%d",&p[i].quantidade);
        printf("Digite o Preco do %d produto: ",i+1);
        scanf("%f",&p[i].preco);
    }

    maior_preco = p[0].preco;
    for(int j=0;p[0].nome[j]!='\0';j++){
        nome_preco[j] = p[0].nome[j];
    }
    for(int j=0;p[0].nome[j]!='\0';j++){
        if(p[0].nome[j]=='\0'){
            nome_preco[j] = '\0';
        }
    }

    for(i=0;i<N;i++){
        if(p[i].preco>maior_preco){
            maior_preco = p[i].preco;
            for(int j=0;p[i].nome[j]!='\0';j++){
                nome_preco[j] = p[i].nome[j];
            }
            for(int j=0;p[i].nome[j]!='\0';j++){
                if(p[i].nome[j]=='\0'){
                    nome_preco[j] = '\0';
                }
            }
        }
    }

    maior_quantidade = p[0].quantidade;
    for(int j=0;p[0].nome[j]!='\0';j++){
        nome_quantidade[j] = p[0].nome[j];
    }
    for(int j=0;p[0].nome[j]!='\0';j++){
        if(p[0].nome[j]=='\0'){
            nome_quantidade[j] = '\0';
        }
    }

    for(i=0;i<N;i++){
        if(p[i].quantidade>maior_quantidade){
            maior_quantidade = p[i].quantidade;
            for(int j=0;p[i].nome[j]!='\0';j++){
                nome_quantidade[j] = p[i].nome[j];
            }
            for(int j=0;p[i].nome[j]!='\0';j++){
                if(p[i].nome[j]=='\0'){
                    nome_quantidade[j] = '\0';
                }
            }
        }
    }

    printf("O produto que possui o maior preco eh o %s com R$%.2f\n",nome_preco,maior_preco);
    printf("O produto que possui a maior quantidade disponivel no estoque eh o %s com %d unidades",nome_quantidade,maior_quantidade);

    free(p);
    return 0;
}