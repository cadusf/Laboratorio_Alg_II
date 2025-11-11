#include <stdio.h>
char * forma_triangulo(float l1,float l2,float l3){
    if((l1 < l2+l3) && (l2 < l1+l3) && (l3 < l1+l2)){
        return "formam um triangulo";
    }else{
        return "nao formam um triangulo";
    }
}
char * tipo_triangulo(float l1,float l2,float l3){
    if ((l1 == l2) && (l2 == l3)){
        return "triangulo equilatero";
    }else if((l1 != l2) && (l2 != l3) && (l1 != l3)){
        return "triangulo escaleno";
    }else{
        return "triangulo isosceles";
    }
}
int main()
{
    float lado1, lado2, lado3;

    printf("Digite 3 lados de um triangulo: ");
    scanf("%f %f %f",&lado1, &lado2, &lado3);
    printf("Esses lados %s ",forma_triangulo(lado1,lado2,lado3));
    
    if(forma_triangulo(lado1,lado2,lado3) == "formam um triangulo"){
        printf("e esse triangulo eh um %s",tipo_triangulo(lado1,lado2,lado3));
    }
    return 0;
}