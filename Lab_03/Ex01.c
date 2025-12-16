#include <stdio.h>

int main() {

    int a = 10; 
    float b = 22.5;
    char c ='u';

    int *x = &a;
    float *y = &b;
    char *z = &c;

    printf("a = %d, b = %.2f, c = %c\n", a, b, c); 
    
    *x = 20; 
    *y = 10.5;
    *z = 'f';
    
    printf("a = %d, b = %.2f, c = %c\n", a, b, c); 
    
    return 0;
}