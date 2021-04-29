#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

//Declarar e inicializar 2 variables (a,b)
float a = 0;
float b = 0;
int operacion, opcion;
float resultadoSuma;


printf("----------------------------------------");
printf("\n¿Que deseas hacer?\n");
printf(" 1.- Realizar operaciones \n 2.- Salir\n");
scanf("%d", &opcion);


if (opcion != 1){
    printf("\nPrograma terminado\n");
	printf("----------------------------------------");
    exit(0);
}else{
printf("----------------------------------------");
printf("\nQue operacion deseas?:\n");
printf(" 1.- Suma \n 2.- Resta \n 3.- Multiplicacion \n 4.- Division \n 5.- Raiz Cuadrada \n 6.- Potencia\n 7.- Salir\n");
scanf("%d", &operacion);
}
if(operacion ==7){
printf("\nPrograma terminado\n");
printf("----------------------------------------");
exit(0);
}
if(operacion ==5){
printf("----------------------------------------");
printf("\nDame el numero: ");
scanf("%f", &a);
}
if(operacion !=5){


//Ingresar los datos (a,b)
printf("----------------------------------------");
printf("\nIntroduce el primer numero:  ");
scanf("%f", &a);
printf("\nIntroduce el segundo numero:  ");
scanf("%f", &b);
}


//Imprimir el resultado
switch ( operacion ){
    case 1:
    printf("\nEl resultado de %0.2f + %0.2f = %f\n", a, b, resultadoSuma);
        break;
    case 2:
    printf("\nEl resultado de %0.2f - %0.2f = %0.2f\n", a, b, a - b);
        break;
    case 3:
    printf("\nEl resultado de %0.2f * %0.2f = %0.2f\n", a, b, a * b);
        break;
    case 4:
    if( b == 0){
    printf("\nLa division entre %0.2f no esta definida\n", b);
    }else{
    printf("\nEl resultado de %0.2f / %0.2f = %0.2f\n", a, b, a / b);
    }
    break;
    case 5:
    if(a < 0){
    printf("\nLa raiz cuadrada de un numero negativo no esta definida\n");
    }else{
    printf("\nLa raiz cuadrada de %.2f es %.2f", a, sqrt(a));
	}
	break;
    case 6:
    printf("\nEl resultado de %.2f elevado a la %.2f es %.2f\n", a, b, pow(a, b));
        break;
	case 7:
	exit(0);
    default: printf("Elige una opcion valida\n");
}while(operacion != 7);
}
