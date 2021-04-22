#include <stdio.h>

int x=0;
int y=0;

int main(void){

printf("Introduce un número: ");
scanf("%d",&x);
printf("Introduce un número: ");
scanf("%d",&y);

if(x==y){
    printf("\nEsto es el primer IF\n");
    printf("%d es igual que %d", x, y);
}
else{
if(x>y){
    printf("\nEsto es el segundo IF\n");
    printf("%d es mayor que %d", x, y);
}
else{
    printf("\nEsto es el tercer IF\n");
    printf("%d es mayor que %d", y, x);
    }
}
printf("\nFin del programa\n");
return 0;
}

