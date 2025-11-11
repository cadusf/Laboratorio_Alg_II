#include <stdio.h>
int convertor(int horas, int minutos, int segundos);
int main()
{
    int horas, minutos, segundos;
    printf("Digite o horario (hh mm ss): ");
    scanf("%d %d %d",&horas,&minutos,&segundos);
    printf("Seu horario em segundos eh: %d", convertor(horas,minutos,segundos));
    return 0;
}
int convertor(int horas, int minutos, int segundos){
    int resultado_em_segundos;
    horas *= 3600;
    minutos *= 60;
    resultado_em_segundos = horas + minutos + segundos;
    return resultado_em_segundos;
}