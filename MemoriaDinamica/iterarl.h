/*
 * iterarl.h
 *
 *  Created on: 10 abr. 2017
 *      Author: Admin
 */

#include <stdio.h>

#ifndef __ITERARL_H__
#define __ITERARL_H__

void printEntero(void* v);
void printDecimales(void* v);
void iterar(void* array, unsigned arrayLength, unsigned typeSize, void (*doIt)(void*)) ;

#endif
