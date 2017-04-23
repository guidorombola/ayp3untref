/*
 * Ejercicio13.c
 *
 *  Created on: 2 abr. 2017
 *      Author: Admin
 */
#include<stdio.h>
#include<string.h>

int longitud_string(char* cadena){
    int longitud = 0;
    while(*cadena){
        longitud++;
        cadena++;
    }
    return longitud;
}

int maint(int argc, char **argv) {
	char cadena[] = {'h','o', 'l', 'a', 0x0};
	char cadena_null [] = {0x0}; //Si uso cadena nula, devuelve 0
	int longitud = longitud_string(cadena);
	printf("La longitud de la cadena %s es %d\n", cadena, longitud);
	return 0;
}
