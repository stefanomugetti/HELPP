

#include <stdio.h>
#include <stdlib.h>
#include "cursada.h"


void imprimirArray(int array[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
}
int promedioArray(int array[],int size,float* pResultado)
{
	int acumuladorValores=0;
	int i;
	int retorno=-1;
	if(size> 0 && pResultado!=NULL && array!=NULL)
	{
		for(i=0;i<size;i++)
		{
			acumuladorValores=acumuladorValores+array[i];
		}
		*pResultado=(float)acumuladorValores/size;
		retorno = 0;
	}
	return retorno;

}
