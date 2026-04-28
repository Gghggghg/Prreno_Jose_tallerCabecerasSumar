#include <stdio.h>
#include "sumar.h"
#include "restar.h"
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
    printf("la resta es: %d", restar(a,b));
    return 0;
}