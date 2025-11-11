#include <stdio.h>

float volume_esfera(float raio);
int main()
{
    float raio;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    printf("O volume da esfera do raio %.2f eh: %.2f", raio,volume_esfera(raio));
    return 0;
}
float volume_esfera(float raio){
    float volume;
    volume = 4.0/3.0 * 3.14 * raio * raio * raio;
    return volume;
}