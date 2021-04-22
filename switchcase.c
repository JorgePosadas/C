#include <stdio.h>
#include <stdlib.h>

/* 

1.- Crear repositorio
2.- Crear programa

   2.1.- Divisa a convertir
   2.2.- Cantidad de pesos mexicanos a convertir
   2.3.- Imprimir la conversión de divisas
3. Subir a repositorio
4. Compartir enlace
*/

int main(){

//Declarar e inicializar 2 variables (a,b)
float a = 0;
float b = 0;
int operacion, opcion;
float resultadoSuma;

printf("----------------------------------------");
printf("\n¿Que deseas hacer?\n");
printf("1.- Realizar operaciones \n2.- Salir\n");
scanf("%d", &opcion);

if (operacion != 1){
    printf("Salir\n");
    exit(0);
}else{

//Ingresar los datos (a,b)
printf("Introduce el primer numero:   ");
scanf("%f", &a);
printf("Introduce el segundo numero:   ");
scanf("%f", &b);

//Elegir operación (+,-,*,/)
printf("Que operacion deseas?:   ");
printf("1.- Suma \n2.- Resta \n3.- Multiplicacion \n4.- Division \n5.- Salir\n");
scanf("%f", &operacion);

//Imprimir el resultado
switch ( operacion ){
    case 1:
    resultadoSuma = a + b;
    printf("El resultado de %0.2f + %0.2f = %f\n", a, b, resultadoSuma);
        break;
    case 2:
    printf("El resultado de %0.2f - %0.2f = %0.2f\n", a, b, a - b);
        break;
    case 3:
    printf("El resultado de %0.2f * %0.2f = %0.2f\n", a, b, a * b);
        break;
    case 4:
    if( b == 0){
    printf("\tLa division entre %0.2f no está definida\n", b);
    }else{
    printf("El resultado de %0.2f / %0.2f = %0.2f\n", a, b, a / b);
    }
    break;
    case 5:
    printf("Salir\n");
    exit(0);
    default:
    printf("Elige una opcion valida\n");
}
printf("Printf fuera del switch");
}
printf("Printf fuera del else");
return 0;
}