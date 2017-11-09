#include<stdio.h>	
int fnCuadro(int ,int ); //funcion prototipo

int main(){
	
	int a,b;


	printf("Inserte las filas: ");

	scanf("%d",&a);

	printf("Iserte las columnas: ");

	scanf("%d",&b);

	fnCuadro(a,b);



	return 0;


}


int fnCuadro(int l,int m) {


	int j=0;

	int k=0;

	for(j=1;j<=l;j=j+1){

		for(k=1;k<=m;k=k+1){

			printf("*");

		}

		printf("\n");

	}


}
