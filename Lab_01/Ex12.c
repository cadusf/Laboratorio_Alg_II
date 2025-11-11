#include <stdio.h>

int soma_algarismos(int numero);

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    int resultado = soma_algarismos(num);
    if (resultado != -1) {
        printf("Soma dos algarismos: %d\n", resultado);
    }
    
    return 0;
}
int soma_algarismos(int numero) {
    if (numero <= 0) {
        printf("Numero invalido!\n");
        return -1;
    }
    
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10; 
        numero /= 10;        
    }
    return soma;
}
