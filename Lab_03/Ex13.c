#include <stdio.h>
#include <math.h>

void calc_esfera(float raio, float *area, float *volume);

int main()
{
    float raio, area, volume;
    
    printf("Raio: ");
    scanf("%f", &raio);
    
    calc_esfera(raio, &area, &volume);
    
    printf("Area: %.2f\nVolume: %.2f", area, volume);
    
    return 0;
}

void calc_esfera(float raio, float *area, float *volume)
{
    *area = 4 * 3.14159 * raio * raio;
    *volume = (4.0/3.0) * 3.14159 * raio * raio * raio;
}
