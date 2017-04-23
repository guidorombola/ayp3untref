/*
 * ejercicio16.c
 *
 *  Created on: 10 abr. 2017
 *      Author: Admin
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include "ejercicio15_mem_dinamica.c"

void reemplazarPalabras(char* parrafoDestino, char* parrafoFuente, char* palabraAReemplazar,
		char* palabraPorReemplazar, unsigned volumenParrafoFuente){

	int cantidadOcurrencias = 0;
	void** heap = malloc(10000);
	char** ocurrenciasHeap = (char**)(heap);
	memset(ocurrenciasHeap, 0, 10000);
	char* current = parrafoDestino;
	int cantidadTokens = 0;
	encontrarOcurrences(parrafoFuente, palabraAReemplazar, ocurrenciasHeap, &cantidadOcurrencias);

	int longitudPalabraPorReemplazar = strlen(palabraPorReemplazar);
	int longitudPalabraAReemplazar = strlen(palabraAReemplazar);

	int aux = 0;
	while(aux <= volumenParrafoFuente){
		if(*ocurrenciasHeap != parrafoFuente){ //Si la direccion de la ocurrencia es distinta a la de Parrafo
			if(*parrafoFuente == '\0' || aux == volumenParrafoFuente){
				*current = ' ';
			} else {
				*current = *parrafoFuente;
			}
			current++;
			parrafoFuente++;
			aux++;
		} else {
		//Si no, es porque la direccion es igual a la de una ocurrencia de la palabra
		//a reemplazar, por ende copio la nueva palabra al parrafo destino
		memcpy(current, palabraPorReemplazar, longitudPalabraPorReemplazar);
		current+=longitudPalabraPorReemplazar;
		*current = ' ';
		current++;
		parrafoFuente += longitudPalabraAReemplazar + 1; //+1 por el espacio
		cantidadOcurrencias--;
		ocurrenciasHeap++;
		aux += longitudPalabraAReemplazar+1;
		}

	}

	free(ocurrenciasHeap);
	ocurrenciasHeap = 0x0;
}

/**
 * Copia la palabra al parrafo destino, y luego un espacio
 */
void copiarPalabraAParrafo(char* palabra, char* parrafoFuente, char* parrafoDestino,
		int longitudPalabraPorReemplazar, int longitudPalabraAReemplazar){

	memcpy(parrafoDestino, palabra, longitudPalabraPorReemplazar);
	parrafoDestino+=longitudPalabraPorReemplazar;
	*parrafoDestino = ' ';
	parrafoDestino++;
	parrafoFuente += longitudPalabraAReemplazar + 1; //+1 por el espacio

}

int main(int argc, char **argv) {
	char parrafo[] = "esta palabra la voy a palabra cambiar si si No";
	unsigned volumenParrafo = sizeof(parrafo);
	void* heap = malloc(100);
	char* parrafoSalidaHeap = (char*)heap;
	memset(parrafoSalidaHeap, 0, volumenParrafo*2);
	reemplazarPalabras(parrafoSalidaHeap, parrafo, "palabra", "hola", volumenParrafo);
	printf("%s", parrafoSalidaHeap);
	free(parrafoSalidaHeap);
	parrafoSalidaHeap = 0x0;
	return 0;

	/*
	 * ¿Por qué cuando entro al metodo encontrarOccurrences:
	 *
	 * char parrafo[] = "Esto es un parrafo";
	 *
	 * me lo interpreta así:
	 *
	 * 'E', 's', 't', o', '\0', 'e', 's', '\0', 'u','n', \0, 'p','a','r','r','a','f','o', \0
	 *
	 * Es por el strtok
	 */


}


