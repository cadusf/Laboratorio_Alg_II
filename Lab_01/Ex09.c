#include <stdio.h>

float volume_cilindro(float altura, float raio);
int main()
{
    float altura, raio;
    
    printf("Digite a altura e o raio do cilindro: ");
    scanf("%f %f", &altura, &raio);
    
    printf("Volume do cilindro: %.2f", volume_cilindro(altura, raio));
    return 0;
}

float volume_cilindro(float altura, float raio) {
    float volume = 3.141592 * raio * raio * altura;
    return volume;
}