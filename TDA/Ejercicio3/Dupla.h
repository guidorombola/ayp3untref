/*
 * dupla.h
 *
 *  Created on: 23 abr. 2017
 *      Author: Admin
 */

#ifndef EJERCICIO3_DUPLA_H_
#define EJERCICIO3_DUPLA_H_

typedef struct _Dupla {
    char* clave;
    void* dato;
    unsigned longitudDato;
} Dupla;

void dupla_init(Dupla* this, const char* nombre, void* dato, unsigned longitud_dato);

void dupla_liberar(Dupla* this);

/***
* Modifica la clave de la dupla
*
* @param  this: Dupla
* @param clave: La nueva clave de la dupla
*
* @return 'this' modificada (la misma que recibe)
*/
Dupla* dupla_modificar(Dupla* this, const char* clave);

/***
* Almacena un dato en la tupla
*
* @param           this: Dupla
* @param          valor: Valor que quiero almacenar
* @param longitud_valor: Longitud del valor a almacenar
*
* @return 'this' modificada (la misma que recibe)
*/
Dupla* dupla_valor(Dupla* this, void* valor, unsigned longitud_valor);

void dupla_mostrar(Dupla* this, void(*doIt)(void*));

#endif /* EJERCICIO3_DUPLA_H_ */
