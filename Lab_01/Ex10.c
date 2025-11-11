#include <stdio.h>

int maior(int a, int b);
int main() {
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("O maior eh: %d", maior(n1, n2));
    return 0;
}
int maior(int a, int b) {
    if(a>b){
        return a;
    }else{
        return b;
    }
}
