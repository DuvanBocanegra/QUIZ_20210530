#include "../API/linalg.h"
#include <stdio.h>

void Determinante2x2(){
    float a1=0, a2=0, b1=0, b2=0, result=0;
    printf("Indica el valor de A1 -> ");
    scanf("%f",&a1);
    printf("Indica el valor de A2 -> ");
    scanf("%f",&a2);
    printf("Indica el valor de B1 -> ");
    scanf("%f",&b1);
    printf("Indica el valor de B2 -> ");
    scanf("%f",&b2);
    result=((a1*b2)-(a2*b1));
    printf("El resultado de la determinante es [%f]\n",result);
}
