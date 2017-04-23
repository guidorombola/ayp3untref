/*
 * Parrafo.h
 *
 *  Created on: 22 abr. 2017
 *      Author: Guido
 */

#ifndef PARRAFO_H_
#define PARRAFO_H_

typedef struct _Parrafo {
	char** palabras;
	unsigned cantidad;
} Parrafo;		//de esta manera, defino Parrafo como tipo de dato. Y evito hacer 'struct Parrafo' cada vez que declaro ese TDA

Parrafo* parrafo_inicializar_vacio(Parrafo* this);
Parrafo* parrafo_inicializar_con(Parrafo* this, char** parrafo, unsigned palabras);
Parrafo* parrafo_mostrar(Parrafo* this);
Parrafo* parrafo_reemplazar_todo(Parrafo* this, char* palabra, char* reemplazo);


#endif /* PARRAFO_H_ */
