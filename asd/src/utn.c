/*
 * utn.c
 *
 *  Created on: Apr 21, 2021
 *      Author: Stefano
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cursada.h"

static int esNumerica(char* cadena,int limite);
static int getInt(int* resultado);
static int myGets(char* cadena,int longitud);

int myGets(char* cadena, int longitud)
{
	int retorno=-1;
	char bufferString[4096]; // *****************************

	if(cadena != NULL && longitud > 0)
	{
		fflush(stdin);
		if(fgets(bufferString,sizeof(bufferString),stdin) != NULL)
		{
			if(bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\n')
			{
				bufferString[strnlen(bufferString,sizeof(bufferString))-1] = '\0';
			}
			if(strnlen(bufferString,sizeof(bufferString)) <= longitud)
			{
				strncpy(cadena,bufferString,longitud);
				retorno=0;
			}
		}
	}
	return retorno;
}

static int getInt(int* resultado)
{
	int retorno=-1;
	char buffer[5000];

	if(resultado != NULL && myGets(buffer,sizeof(buffer))==0 && esNumerica(buffer,sizeof(buffer)))
	{
		retorno=0;
		*resultado=atoi(buffer);
	}
	return retorno;
}

static int esNumerica(char* cadena, int limite)
{
	int retorno = 1; // VERDADERO
		int i;
		for(i=0;i<limite && cadena[i] != '\0';i++)
		{
			if(i==0 && (cadena[i] == '+' || cadena[i] == '-'))
			{
				continue;
			}
			if(cadena[i] > '9' || cadena[i] < '0')
			{
				retorno = 0;
				break;
			}
			//CONTINUE
		}
		//BREAK
		return retorno;
	}

int utn_getNumer(int* pDatoIngresado,char* pTexto,char* pTextoError,int min,int max,int reintentos)
{
	int retorno=-1;
	int bufferInt;
if(pDatoIngresado != NULL && pTexto != NULL && pTextoError != NULL && min <= max && reintentos >=0)
{
	for(int i=0;reintentos>=i;reintentos--)
	{
		printf("%s",pTexto);
		fflush(stdin);
			if(getInt(&bufferInt) == 0 && min <= max && bufferInt >= min && bufferInt<= max)
			{
				*pDatoIngresado=bufferInt;
				retorno=0;
				break;
				}
				else
				{
					printf("%s",pTextoError);
				}
	}
}
	return retorno;
}
