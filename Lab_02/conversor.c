#include <stdio.h>
#include "conversor.h"

float celsius_fahrenheit(float c){
    return (c * 1.8 + 32);
}
float fahrenheit_celsius(float f){
    return ((f - 32) * 5.0/9.0);
}
