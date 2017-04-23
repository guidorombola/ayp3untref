/*
 * ejercicio15_bien.c
 *
 *  Created on: 10 abr. 2017
 *      Author: Admin
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TAM_OCCURRENCES 4096

char** encontrarOcurrences(char* parrafo, char* palabra, char** heapOccurs, int* cantidadOccurs){
	char* token = 0x0;
	const char delimitador[] = " ";
	char** current = heapOccurs;
	token = strtok(parrafo, delimitador);
	while(token){
		if(strcmp(token, palabra) == 0){
			*current = token;
			current++;						//Incrementa (tamanioPunteroAChar * 1) == 4 posiciones
			(*cantidadOccurs)++;
		}
		token = strtok(NULL, delimitador);
	}
	return heapOccurs;
}

//int main(int argc, char **argv) {
//	char parrafo[] = "este es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";
//	int cant = 0;
//	void* heap = malloc(TAM_OCCURRENCES*sizeof(char*));	//Reservo un espacio de memoria en el heap
//														//de tamanio 4096*4 bytes
//	char** heapOccurs = (char**)heap; 	//Son arrays de punteros a char, o puntero a puntero. Casteo, no pierdo informacion porque son punteros
//	encontrarOcurrences(parrafo, "palabra", heapOccurs, &cant);
//	free(heapOccurs);
//	heapOccurs = 0x0;					//Para evitar confusiones, llevo el puntero a cero, ya que
//										//luego de hacer el free, no es utilizable. Seria lo mismo
//										//que hacer free(heap)
//	return 0;
//}
