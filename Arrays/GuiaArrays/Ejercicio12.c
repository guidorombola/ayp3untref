#include<stdio.h>

int mainp(int argc, char **argv) {
	int array1[] = {1,2,3,43};
	int array2[] = {5,6,7,88, -2};
	int arrayDest[9];
	concatenarArrays(arrayDest, array1, array2, sizeof(array1), sizeof(array2));
	int i;
	for(i=0;i<9; i++){
		printf("%d\n", arrayDest[i]);
	}
}

void concatenarArrays(char* destino, char* array1, char* array2, int volumenArray1, int volumenArray2){
	while(volumenArray1--){
		*destino = *array1;
		destino++;
		array1++;
	}
	while(volumenArray2--){
		*destino = *array2;
		destino++;
		array2++;
	}
}
