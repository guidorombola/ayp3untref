/*
 * Nave.h
 *
 *  Created on: 23 abr. 2017
 *      Author: Admin
 */

#ifndef EJERCICIO1_NAVE_H_
#define EJERCICIO1_NAVE_H_

#define NAVE_NOMBRE_LARGO 1024

typedef struct _Nave{
	int vida;
	char nombre[NAVE_NOMBRE_LARGO];
}Nave;

void nave_init(Nave* this, const char* nombre);
void nave_daniar(Nave* this, int danio);
void nave_print(Nave* this);

#endif /* EJERCICIO1_NAVE_H_ */
