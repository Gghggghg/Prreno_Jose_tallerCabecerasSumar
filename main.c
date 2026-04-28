#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "division.h"
int main(int argc,char const *argv[])
{
    int a,b;

    printf("ingrese primer numero:");
    scanf("%d", &a);
      printf("ingrese segundo numero:");
    scanf("%d", &b);
    sumar(a,b);
    restar(a,b);
    printf("la suma es: %d \n", sumar(a,b));
    printf("la resta es: %d\n", restar(a,b));
    printf("el producto es: %d\n", multiplicar(a,b));
    printf("el cociente es: %d", division(a,b));
    return 0;
}