/*
 * Dupla.c
 *
 *  Created on: 23 abr. 2017
 *      Author: Admin
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Dupla.h"


void dupla_init(Dupla* this, const char* nombre, void* dato, unsigned longitud_dato){
	char* claveHeap = (char*)malloc(strlen(nombre)+1);
	strcpy(claveHeap, nombre);
	this->clave = claveHeap;
	void* datoHeap = malloc(longitud_dato);
	memcpy(datoHeap, dato, longitud_dato);
	this->dato = datoHeap;
	this->longitudDato = longitud_dato;
}

void dupla_liberar(Dupla* this){
	free(this->clave);
	free(this->dato);
	this->longitudDato = 0;
}

/***
* Modifica la clave de la dupla
*
* @param  this: Dupla
* @param clave: La nueva clave de la dupla
*
* @return 'this' modificada (la misma que recibe)
*/
Dupla* dupla_modificar(Dupla* this, const char* clave){
	this->clave = realloc(this->clave, strlen(clave)+1);
	strcpy(this->clave, clave);
	return this;
}

/***
* Almacena un dato en la tupla
*
* @param           this: Dupla
* @param          valor: Valor que quiero almacenar
* @param longitud_valor: Longitud del valor a almacenar
*
* @return 'this' modificada (la misma que recibe)
*/
Dupla* dupla_valor(Dupla* this, void* valor, unsigned longitud_valor){
	if(longitud_valor != this->longitudDato){
		this->dato = realloc(this->dato, longitud_valor);
		this->longitudDato = longitud_valor;
	}
	memcpy(this->dato, valor, longitud_valor);
	return this;
}

void dupla_mostrar(Dupla* this, void(*doIt)(void*)){
	printf("Clave: %s\n", this->clave);
	void* valor = this->dato;
	printf("Valor:");
	(*doIt)(valor);
}


