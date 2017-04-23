/*
 * Cadena.h
 *
 *  Created on: 23 abr. 2017
 *      Author: Admin
 */

#ifndef EJERCICIO2_CADENA_H_
#define EJERCICIO2_CADENA_H_

typedef struct Cadena{
	char* datos;
	unsigned cantidad;
}Cadena;

void cadena_init(Cadena* this, const char* dato, unsigned largo);
void cadena_liberar(Cadena* this);

/***
* Modifica la cadena de caracteres almacenada por la cadena
*
* @param cadena: El TDA cadena que voy a modificar
* @param data:   La cadena datos que utilizo para cambiar el valor
*                del TDA
*
* @return  cadena modificada (la misma que recibe)
*/
Cadena* cadena_modificar(Cadena* this, const char* dato);

/***
* Concatenar un contenido a una cadena
*
* @param cadena: El TDA cadena que voy a modificar
* @param data:   La cadena datos que utilizo para cambiar el valor
*                del TDA
*
* @return  cadena modificada (la misma que recibe)
*/
Cadena* cadena_concatenar(Cadena* this, const char* dato);

void cadena_print(Cadena* this);

#endif /* EJERCICIO2_CADENA_H_ */
