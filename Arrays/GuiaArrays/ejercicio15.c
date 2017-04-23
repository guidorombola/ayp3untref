/*
 * ejercicio15.c
 *
 *  Created on: 2 abr. 2017
 *      Author: Admin
 */
#include<stdio.h>
#include<string.h>

int mainff(int argc, char **argv) {
	char parrafo[] = "este es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";
	char palabra[] = "palabra";
	encontrarOcurrencias(parrafo, palabra);
}

void encontrarOcurrencias(char* parrafo, char* palabra){
	char* token;
	const char delimitador[] = " ";
	token = strtok(parrafo, delimitador);
	while(token){
		if(strcmp(token, palabra)== 0){		//Si el token es igual a la palabra
			printf("%p\n", token);			//muestro direccion del token
		}
		token = strtok(NULL, delimitador);
	}
}



