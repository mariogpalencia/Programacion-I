#include <stdio.h>

int main(){

   float a,b;
   printf("De un valor para a");
   scanf("%f",&a);
   printf("De un valor para b");
   scanf("%f",&b);
   printf("La suma de a y b es %.2f",a+b);
   //%.2f es para mantener el numero de decimales en un maximo de dos.
   return 0;
}
