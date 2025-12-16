#include <stdio.h>
#include <stdlib.h>

void alocacao(char **x, int num){
    *x = (char*) malloc((num + 1) * sizeof(char));
}

int main()
{
    char *a = NULL;
    int n;

    printf("Digite o tamanho da string: ");
    scanf("%d",&n); 

    alocacao(&a, n);
    
    printf("Digite o conteudo: ");
    scanf("%s", a);

    for(int i = 0; i < n && a[i] != '\0'; i++){
        char c = a[i];

        if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){

            printf("%c", c);
        }
    }

    free(a);

    return 0;
}