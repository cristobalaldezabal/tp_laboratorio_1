#include <stdio.h>
#include <stdlib.h>

int sumar (int valor1, int valor2)
{
	int sumar;
	sumar = valor1 + valor2;
	return sumar;
}
int restar (int valor1, int valor2)
{
	int resta;
	resta = valor1 - valor2;
	return resta;
}
float dividir (int valor1, int valor2)
{
	float division;
	division = valor1/(float)valor2;
	return division;
}
int producto(int valor1, int valor2)
{
	int multiplicacion;
	multiplicacion = valor1 * valor2;
	return multiplicacion;
}
int factorial(int valor1)
{
	int factorial =1;
	int i;

	for(i=1;i<=valor1;i++)
	{
			factorial = factorial*i;
	}
	return factorial;
}

char menu()
		{

    char cuenta;
        printf("\na) Sumar dos numeros");
		printf("\nb) Restar dos numeros");
		printf("\nc) Dividir dos numeros");
		printf("\nd) multiplicar dos numeros");
		printf("\ne) Calcular el factorial de un numero");

		printf("\n ingrese una opción");
		fflush(stdin);
		scanf("%c",&cuenta);
		switch(cuenta){
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
			break;
		default:

			printf("\n ingrese una opcion correcta");
			fflush(stdin);
			scanf("%c",&cuenta);
			while(cuenta!='a'&&cuenta!='b'&&cuenta!='c'&&cuenta!='d'&&cuenta!='e')
			{
				printf("\n ingrese una opcion correcta, por favor");
				fflush(stdin);
							scanf("%c",&cuenta);
			}
			break;
		}

		return cuenta;

        }


