#include <stdio.h>
char * desenha_linha(int quant_sinais);
int main()
{
    int numero_sinais;
    scanf("%d",&numero_sinais);
    printf("%s",desenha_linha(numero_sinais));
    return 0;
}
char * desenha_linha(int quant_sinais){
    for(int i = 0; i<=quant_sinais;i++){
        return printf("=");
    }
}