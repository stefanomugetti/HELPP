/*
 ============================================================================
 Name        : asd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cursada.h"
#include "utn.h"
int calcularMayor(int* resultado,int numA,int numB);

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	//int num2;
	//int mayor;

	num1=utn_getNumer(&num1,"Ingrese el primer numero entre -100 y 100","El dato ingresado es incorrecto",-100,100,2);
	printf("NumA:%d-----",num1);
	//num2=utn_getNumer(&num2,"Ingrese un segundo numero entre -100 y 100","El dato ingresado es incorrecto",-100,100,2);

	//if(calcularMayor(&mayor,num1,num2) == 0)
	//{
	//	printf("Los numeros son iguales\n");
	//}
	//else
	//{
		//printf("El numero mayor es %d\n",mayor);
	//}
	return 0;
}
int calcularMayor(int* resultado,int numA,int numB)
{
	int retorno=-1;

	if(resultado != NULL)
	{
		if(numA > numB)
		{
			*resultado=numA;
			retorno=1;
		}
		else if(numB > numA)
		{
			*resultado=numB;
			retorno=1;
		}
		else
		{
			retorno=0;
		}
	}
	return retorno;
}
