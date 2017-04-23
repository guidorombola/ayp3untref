/*
 * Ejercicio8.c
 *
 *  Created on: 2 abr. 2017
 *      Author: Admin
 */

int mainf(int argc, char **argv) {
	int array[] = {1,2,3,4};
	revertirArrayGenerico(array, 4, 16);
	printArrayInt2(array, 4);
}

void revertirArrayInt(int* array, int tamanio){
	int i;
	for(i = 0; i<tamanio/2; i++){
		int tmp = array[i];
		array[i] = array[tamanio-i-1];
		array[tamanio-i-1] = tmp;
	}
}

void printArrayInt2(int* array, int tamanio){
	while(tamanio--){
		printf("%d\n", *array);
		array++;
	}
}

void revertirArrayGenerico(char* array, int volumenTipoDato, int volumenArray){
	int tamanio = volumenArray/volumenTipoDato;
	int i = 0;
	char* bytes1 = array;
	char* bytes2 = (array+volumenArray)-(volumenTipoDato);
	while(i < tamanio/2){
		intercambiarBytes(bytes1, bytes2, volumenTipoDato);
		bytes1 += volumenTipoDato;
		bytes2 -= volumenTipoDato;
		i++;
	}
}

void intercambiarBytes(char* bytes1, char* bytes2, int volumenTipoDato){
	char tmp;
	while(volumenTipoDato--){
		tmp = *bytes1;
		*bytes1 = *bytes2;
		*bytes2 = tmp;
		bytes1++;
		bytes2++;
	}
}

