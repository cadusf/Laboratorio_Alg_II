#include <stdio.h>

int main() {
    float v[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    
    for(int i = 0; i < 10; i++) {
        printf("Endereco da posicao %d: %p\n", i, (v+i));
    }
    
    return 0;
}