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
        scanf("%s",&p[i].nome);
        printf("Digite a Quantidade no estoque do %d produto: ",i+1);
        scanf("%d",&p[i].quantidade);
        printf("Digite o Preco do %d produto: ",i+1);
        scanf("%f",&p[i].preco);
    }

    maior_preco = p[0].preco;
    for(i=0;i<N;i++){
        if(p[i].preco>maior_preco){
            maior_preco = p[i].preco;
            nome_preco = p[i].nome;
        }
    
    }

    maior_quantidade = p[0].quantidade;
    for(i=0;i<N;i++){
        if(p[i].quantidade>maior_quantidade){
            maior_quantidade = p[i].quantidade;
            nome_quantidade = p[i].nome;
        }
    
    }
    printf("O produto que possui o maior preco eh o %s com R$%.2f\n",numero_preco+1,maior_preco);
    printf("O produto que possui a maior quantidade disponivel no estoque eh o %s com %d unidades",numero_quantidade+1,maior_quantidade);


    free(p);
    return 0;
}