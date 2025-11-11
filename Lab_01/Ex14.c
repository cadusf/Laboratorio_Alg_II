#include <stdio.h>
char* consumo(float distancia, float litros);
int main()
{
    float distancia, lirtos;
    printf("Digite a distancia em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso: ");
    scanf("%f %f",&distancia, &lirtos);
    printf("%s",consumo(distancia,lirtos));
    return 0;
}
char* consumo(float distancia, float litros){
    float consumo;
    consumo = distancia/litros;
    if(consumo> 14){
        return "Super economico!";
    }else if (consumo < 8){
        return "Venda o carro!";
    }else{
        return "Economico!";
    }
}