/*
 * Ejercicio5.c
 *
 *  Created on: 2 abr. 2017
 *      Author: Admin
 */
#include<stdio.h>

void f(int param[]) {
    printf("sizeof(param): %d\n", sizeof(param) );
    param[3] = 6;
}

void g(int* param) {
    printf("sizeof(param): %d\n", sizeof(param) );
    param[6] = 6;
}

void printArrayInt(int* array, int tamanio){
	while(tamanio--){
		printf("%d\n", *array);
		array++;
	}
}

int maine(){
    int array[] = { 1,2,3,4,5,6,7,8 };
    f(array);
	g(array);

	int tamanio = sizeof(array)/sizeof(int);
	printArrayInt(array, tamanio);
}
