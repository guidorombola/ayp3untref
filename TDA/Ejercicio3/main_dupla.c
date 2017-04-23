/*
 * main_dupla.c
 *
 *  Created on: 23 abr. 2017
 *      Author: Admin
 */
#include<stdio.h>
#include "Dupla.h"

void mostrarEntero(void* p){
	int* pi = p;
	printf("%d\n", *pi);
}

void mostrarDouble(void* p){
	double* pd = p;
	printf("%f\n", *pd);
}

int main(int argc, char **argv) {
	Dupla d;
	int dato = 1;
	dupla_init(&d, "uno", &dato , sizeof(int));
	dupla_modificar(&d, "cinco");
	double dato_2 = 5.4;
	dupla_valor(&d, &dato_2, sizeof(double));
	dupla_mostrar(&d, mostrarDouble);
	dupla_liberar(&d);
}

