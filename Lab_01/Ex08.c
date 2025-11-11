#include <stdio.h>
#include <math.h> 
float hipotenusa(int ca, int co);
int main()
{
    float ca, co;
    
    printf("Digite o valor do cateto adjacente e oposto: ");
    scanf("%f %f", &ca, &co);
    
    printf("A hipotenusa eh: %.2f", hipotenusa(ca, co));
    return 0;
}
float hipotenusa(int ca, int co){
    
    float hipotenusa = sqrt(ca * ca + co * co);
    return hipotenusa;

}