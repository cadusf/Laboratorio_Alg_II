#include <stdio.h>
float convertor_em_Fahrenheit(int Celsius);
int main()
{
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    printf("%.2fC = %.2fF",celsius, convertor_em_Fahrenheit(celsius));
    return 0;
}
float convertor_em_Fahrenheit(int Celsius){
    float resultado;
    resultado = Celsius * (9.0/5.0) + 32.0;
    return resultado;
}