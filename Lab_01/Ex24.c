#include <stdio.h>

void central(int n);

int main() {
    int a;
    scanf("%d", &a);
    central(a);
    return 0;
}

void central(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}