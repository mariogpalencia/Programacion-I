#include <stdio.h>

main(){
float a,b;
     printf("Inserte los numeros \n");
     scanf("%f %f",&a,&b);
     printf("La suma de %.2f y %.2f es %.2f \n",a,b,a+b);
     printf("La resta de %.2f menos %.2f es %.2f \n",a,b,a-b);
     printf("La multiplicacion de %.2f y %.2f es %.2f \n",a,b,a*b);
     printf("La division de %.2f por %.2f es %.2f \n",a,b,a/b);
     return 0;
}
