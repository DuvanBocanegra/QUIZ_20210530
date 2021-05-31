#include "../API/linalg.h"
#include <stdio.h>

void sumMatriz(){

	int columnas=0;
	int filas=0;
	int operacion=0;
	printf("Indique el tamano de la matriz\n");
	printf("Indica si es suma o resta de la matriz (0) suma o (1) resta\n -> ");
	scanf("%d",&operacion);
	printf("Indica la cantidad de columnas -> ");
	scanf("%d",&columnas);
	printf("Indica la cantidad de filas -> ");
	scanf("%d",&filas);
	int temp=0;
	int Matriz1[columnas][filas];
	int Matriz2[columnas][filas];
	int Matriz3[columnas][filas];

	//Limpiar Matriz

	for(int i=0; i < filas; i++){
		for (int j = 0; j < columnas; j++)
		{
			Matriz1[i][j]=0;
		}
		
	}

	for(int i=0; i < filas; i++){
		for (int j = 0; j < columnas; j++)
		{
			Matriz2[i][j]=0;
		}
		
	}	


	
	// Llenar primera matriz
	printf("Llenar la primera matriz\n");


	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			printf("Indica el valor [%d][%d] -> ",i,j);
			scanf("%d",&temp);
			Matriz1[i][j]=temp;
		}

	}

	printf("Llenar la segunda matriz\n");


	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			printf("Indica el valor de [%d][%d] -> ",i,j);
			scanf("%d",&temp);
			if (operacion==1)
			{
				temp=temp*(-1);
			}
			Matriz2[i][j]=temp;
		}

	}

	//Limpiar matriz resultante.
	for(int i=0; i < filas; i++){
		for (int j = 0; j < columnas; j++)
		{
			Matriz3[i][j]=0;
		}
		
	}


	//Suma de matrices
	for(int i=0; i < filas; i++){
		for (int j = 0; j < columnas; j++)
		{
			temp=Matriz1[i][j]+Matriz2[i][j];
			Matriz3[i][j]=temp;
		}
		
	}


	//Mostrar Matriz
	for(int i=0; i < filas; i++){
		for (int j = 0; j < columnas; j++)
		{
			temp=Matriz3[i][j];
			printf("La matriz resultante es [%d][%d]=[%d]\n",i,j,temp);
		}
		
	}

	//return 0;
}	

