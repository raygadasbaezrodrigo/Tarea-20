//PRograma que pida el iva de una cantidad, imprimiendo el iva, el subtotal y el total con scanf//
#include<stdio.h>
#include"IVA.h"

int main ()
{
	float cant=0;
	
		printf("Mande la cantidad  ");
		scanf("%f",&cant);
		printf("El iva es: %f\n\n\n",fniva(cant));
		printf("El subtotal es: %f\n\n\n",fnsubt(cant));
		printf("Total a pagar: %f\n\n\n",cant);
}
