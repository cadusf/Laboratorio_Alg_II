#include <stdio.h>
#include "conversor.h"

int main(){
    float c,f;
    int opcao;
    do
    {
        printf("1 – Converter Celsius → Fahrenheit\n2 – Converter Fahrenheit → Celsius\n0 – Sair\nEscolha qual opcao vc deseja: ");
        scanf("%d",&opcao);

        if(opcao==1){
            printf("Digite a temperatura que deseja converter em Fahrenheit: ");
            scanf("%f",&f);
            printf("%.1fC em Fahrenheit: %.1fF\n",f, celsius_fahrenheit(f));
        }
        else if(opcao==2){
            printf("Digite a temperatura que deseja converter em Celsius: ");
            scanf("%f",&c);
            printf("%.1fF em Celsius: %.1fC\n",c,fahrenheit_celsius(c));
        }
    } while (opcao != 0);
    


    return 0;
}