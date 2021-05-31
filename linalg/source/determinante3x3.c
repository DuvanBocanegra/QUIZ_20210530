#include "../API/linalg.h"
#include <stdio.h>

void Determinante3x3(){
    float a1=0, a2=0, a3=0, b1=0, b2=0, b3=0, c1=0, c2=0, c3=0, result=0, det1=0, det2=0;
    printf("Indica el valor de A1 -> ");
    scanf("%f",&a1);
    printf("Indica el valor de A2 -> ");
    scanf("%f",&a2);
    printf("Indica el valor de A3 -> ");
    scanf("%f",&a3);
    printf("Indica el valor de B1 -> ");
    scanf("%f",&b1);
    printf("Indica el valor de B2 -> ");
    scanf("%f",&b2);
    printf("Indica el valor de B3 -> ");
    scanf("%f",&b3);
    printf("Indica el valor de C1 -> ");
    scanf("%f",&c1);
    printf("Indica el valor de C2 -> ");
    scanf("%f",&c2);
    printf("Indica el valor de C3 -> ");
    scanf("%f",&c3);
    det1=(a1*b2*c3)+(b1*c2*a3)+(c1*a2*b3);
    det2=(c1*b2*a3)+(b1*a2*c3)+(a1*c2*b3);
    result=det1-det2;
    printf("El resultado de la determinante es [%f]\n",result);
}
