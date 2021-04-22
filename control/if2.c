#include <stdio.h>
int main()
{
	int edad;
	printf("Introduce tu edad: [0-150]");
	scanf("%d",&edad);

	if (edad >17 && edad <35)
	{
		 printf("Tienes %d anios, eres mayor de edad",edad);
	}
	else if (edad >= 0 && edad <= 17)
	{
		 printf("Tienes %d anios, eres menor de edad",edad);
	}
	else if (edad >= 35 && edad <=150)
	{
		 printf("Tienes %d anios, eres adulto",edad);
	}
	else
	{
		 printf("Tienes %d anios, eres adulto-mayor",edad);
	}
}
    else{
		
	}
  return 0;
} 	
