#include <stdio.h>
#include <stdlib.h>
#include "tp_laboratorio_1.h"

int sumar (int valor1, int valor2);
int restar (int valor1, int valor2);
float dividir (int valor1, int valor2);
int producto(int valor1, int valor2);
int factorial(int valor1);
char menu();

int main(void)
{
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int suma;
	int resta;
	float division;
	int multiplicar;
	int numFactorial;
	char resp = 's';
	char opcion;
	int flag  = 0;

	do{

	opcion = menu();

	if(flag  == 0 ){
		if(opcion == 'e'){
			printf("ingrese 1er operando (A)");
				fflush(stdin);
				scanf("%d", &numero1);

		}
	else{

		printf("ingrese 1er operando (A)");
		fflush(stdin);
		scanf("%d", &numero1);
		printf("\ningrese 2do operando (B)");
		fflush(stdin);
		scanf("%d",&numero2);
	}

			flag = 1;
	}


		switch(opcion)
		{

		case 'a':
		suma = sumar (numero1,numero2);
		printf("\nla suma es: %d",suma);
		break;

		case 'b':
		resta = restar (numero1,numero2);
		printf("\nla resta es: %d",resta);
		break;

		case 'c':
		if(numero2!=0){
			division = dividir (numero1,numero2);
			printf("\nla division es: %f",division);
		}
		else{
			printf("\nno se puede dividir por cero");
		}
		break;

		case 'd':
		multiplicar = producto(numero1,numero2);
		printf("\nla multiplicacion es: %d", multiplicar);
		break;

		case 'e':
			if (numero1 <0)
			{
					printf("\n no existe el factorial de un numero negativo");
				}
				else
				{
			numFactorial = factorial(numero1);
			printf("\n el factorial  es: %d", numFactorial);
				}
			break;

			default:
				printf("\nopcion incorrecta");
				break;
		}
if(opcion!='e'){
		printf("\nquiere realizar otra operacion con los mismos numeros? s/n");
		fflush(stdin);
		scanf("%c", &resp);
}

		else
		{
			printf ("\n Quiere realizar otra operacion con OTROS numeros? s/n");
			fflush(stdin);
			scanf("%c", &resp);
			flag =0;


		}
	}while(resp == 's');

return 0;
}

