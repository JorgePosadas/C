#include <stdio.h>

int main(){
	int opciones,accion;
	float monto;
	float dolar, euro, libra;
	
	dolar = 19.91;
	euro = 23.96;
	libra = 27.73;
	do{
	printf("�Que deseas hacer?\n\n");
	printf("1.- Calcular divisas\n");
	printf("2.- Salir\n\n");
	scanf("%d", &accion);
	
	if(accion != 1){
	printf("\nPrograma terminado\n");
	printf("--------------------------------");
	exit(0);
	}
	else if(accion=1){
	printf("--------------------------------\n");
	printf("\n�Que moneda quieres convertir a MXN?\n");
	printf("\n1.- Dolar Estadounidense");
	printf("\n2.- Euro");
	printf("\n3.- Libra Esterlina\n\n");
	scanf("%d", &opciones);
}
	switch(opciones){
		opciones = 1;
		case 1:
		printf("--------------------------------\n");
		printf("\nIntroduce la cantidad de dolares estadounidenses que quieres convertir: ");	
        scanf("%f", &monto);
        break;
        opciones = 2;
		case 2:
		printf("--------------------------------\n");
		printf("\nIntroduce la cantidad de euros que quieres convertir: ");	
        scanf("%f", &monto);
        break;
        opciones = 3;
		case 3:
		printf("--------------------------------\n");
		printf("\nIntroduce la cantidad de libras esterlinas que quieres convertir: ");	
        scanf("%f", &monto);
        break;
        case 4:
        default: 
		printf("--------------------------------");
		printf("ERROR: INTRODUCE UNA OPCION VALIDA (1-3)\n");
	}

	switch(opciones){
	opciones = 1;
	case 1:
		printf("--------------------------------\n");
		printf("\n%.0f dolares estadounidenses equivalen a $%.2f MXN\n", monto, dolar*monto);
		break;
	opciones = 2;
	case 2:
		printf("--------------------------------\n");
		printf("\n%.0f euros equivalen a $%.2f MXN\n", monto, euro*monto);
		break;
	opciones = 3;
	case 3:
		printf("--------------------------------\n");
		printf("\n%.0f libras esterlinas equivalen a $%.2f MXN\n", monto, libra*monto);
		break;
}
printf("\nNOTA: Los tipos de cambio mostrados son al 22 de Abril de 2021 a las 12:00 A.M.\n      (Fecha en la que se creo este programa)\n\n");
		printf("------------------------------------------------------------------------------\n\n");
}while(accion!=2);
}
