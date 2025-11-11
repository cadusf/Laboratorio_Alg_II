#include <stdio.h>

void lateral(int numero);

int main() {
    int qntd_central;
    printf("Digite a quantidade de asteriscos central: ");
    scanf("%d", &qntd_central);
    lateral(qntd_central);
    return 0;
}

void lateral(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = num - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}