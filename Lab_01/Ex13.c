#include <stdio.h>

float calcular(float a, float b, char operador);
int main() {
    float n1, n2;
    char op;
    
    printf("Digite dois numeros e um operador (+, -, *, /). (Ex: 2 + 3): ");
    scanf("%f %c %f", &n1, &op, &n2);
    
    float resultado = calcular(n1, n2, op);
    printf("Resultado: %.2f", resultado);
    
    return 0;
}
float calcular(float a, float b, char operador) {
    switch (operador) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Erro: divisao por zero!");
                return 0;
            }
        default:
            printf("Operador invalido!");
            return 0;
    }
}