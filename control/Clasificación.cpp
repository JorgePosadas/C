#include <stdio.h>

/*Clasificación de videojuegos
Clasificación A: Todas las edades
Clasificación B: Mayores de 12
Clasificación B-15: Mayores de 15 años
*/

int anio, edad, opc;

int main(){
    do{
printf("\nIntroduce tu anio de nacimiento: \n");
scanf("%d", &anio);

edad = 2021 - anio;
    
    if(edad <12){
        printf("Sólo puedes seleccionar videojuegos de Clasificación A");
        printf("\nNuestro catálogo con Clasificación A es:\n");
        printf("\n1.- Free Fire\n2.- Minecraft\n");
        }
    else if(edad >=12 && edad <15){
        printf("\nPuedes seleccionar videojuegos de Clasificación A y B");
        printf("\nElige una opción:\n1.- Para toda la familia\n2.- Adolescentes\n");
        scanf("%d", &opc);
        switch(opc){
		    case 1:
            printf("\n1.- Free Fire\n2.- Minecraft");
            break;
            case 2:
            printf("\n1.- Fortnite\n2.- Pokemón\n");
            break;
            default: 
			printf("\nElige una opción válida\n");
        }
        }
    else if(edad >= 15 && edad <18){
        printf("Puedes seleccionar videojuegos de Clasificación A, B y B-15");
        printf("\nElige una opción:\n1.- Para toda la familia\n2.- Adolescentes\n3.- Mayores de 15\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
            printf("\n1.- Free Fire\n2.- Minecraft");
            break;
            case 2:
            printf("\n1.- Fortnite\n2.- Pokemón");
            break;
            case 3:
            printf("\n1.- Call Of Duty\n2.- Gears Of War\n");
            break;
            default: 
			printf("\nElige una opción válida\n");
        }
		}
    else if(edad >= 18 && edad <21){
    printf("Puedes seleccionar videojuegos de Clasificación A, B, B-15 y C");
    printf("\nElige una opción:\n1.- Para toda la familia\n2.- Adolescentes\n3.- Mayores de 15\n4.- Mayores de 18\n");
        scanf("%d", &opc);
            switch(opc){
			case 1:
            printf("\n1.- Free Fire\n2.-Minecraft");
            break;
            case 2:
            printf("\n1.-Fortnite\n2.-Pokemón");
            break;
            case 3:
            printf("\n1.- Call Of Duty\n2.- Gears Of War");
            break;
            case 4:
            printf("\n1.- Mortal Kombat\n2.- Grand Theft Auto\n");
            break;
            default: 
			printf("\nElige una opción válida\n");    
        }
        }
    else if(edad >= 21){
    printf("Puedes seleccionar videojuegos de Clasificación A, B, B-15, C y D");
    printf("\nElige una opción:\n1.- Para toda la familia\n2.- Adolescentes\n3.- Mayores de 15\n4.- Mayores de 18\n5.- Mayores de 21\n");
        scanf("%d", &opc);
            switch(opc){
			case 1:
            printf("\n1.- Free Fire\n2.- Minecraft");
            break;
            case 2:
            printf("\n1.- Fortnite\n2.- Pokemón");
            break;
            case 3:
            printf("\n1.- Call Of Duty\n2.- Gears Of War");
            break;
            case 4:
            printf("\n1.- Mortal Kombat\n2.- Grand Theft Auto");
            break;
			case 5:
            printf("\n1.- Manhunt\n2.- Doom\n");
            break;
            default: 
			printf("\nElige una opción válida\n");
			break;   
        }
    }
}while(edad != 0);
}
