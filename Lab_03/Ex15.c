#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2);

int main()
{
    float a, b, c, r1, r2;
    int qtd;
    
    printf("A B C: ");
    scanf("%f %f %f", &a, &b, &c);
    
    qtd = raizes(a, b, c, &r1, &r2);
    
    if(qtd == 0) printf("Nao tem raiz real");
    else if(qtd == 1) printf("Raiz: %.2f", r1);
    else printf("Raizes: %.2f e %.2f", r1, r2);
    
    return 0;
}

int raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta;
    
    delta = b * b - 4 * a * c;
    
    if(delta < 0) return 0;
    else if(delta == 0){
        *x1 = -b / (2 * a);
        return 1;
    }
    else{
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}
