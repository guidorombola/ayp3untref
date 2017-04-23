/*
 * Cadena.c
 *
 *  Created on: 23 abr. 2017
 *      Author: Admin
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Cadena.h"

void cadena_init(Cadena* this, const char* dato, unsigned largo){
	this->cantidad = largo;
	char* cadenaHeap = (char*)malloc(largo+1);
	strcpy(cadenaHeap, dato);
	this->datos = cadenaHeap;
}

void cadena_liberar(Cadena* this){
	free(this->datos);
	this->cantidad = 0;
}

Cadena* cadena_modificar(Cadena* this, const char* dato){
	this->datos = (char*)realloc(this->datos, strlen(dato)+1);
	strcpy(this->datos, dato);
	this->cantidad = strlen(dato);
	return this;
}

Cadena* cadena_concatenar(Cadena* this, const char* dato){
	this->cantidad = strlen(this->datos) + strlen(dato);
	unsigned nuevoTamanio = this->cantidad+1;
	this->datos = (char*)realloc(this->datos, nuevoTamanio);
	strcat(this->datos, dato);
	return this;
}

void cadena_print(Cadena* this){
	printf("Contenido cadena: %s\n", this->datos);
	printf("Largo cadena: %d\n", this->cantidad);
}

