/*
 * ejercicio9.c
 *
 * Crear una función que encuentre un elemento en un array y si existe devuelva el subíndice dentro del array, de lo contrario -1. 
 */
#include <stdio.h>

int mai(){
    float array[] = {1.2,2.4,3.2,10.1};
    float elemento = 10.1;
    char* bytes = (char*)&elemento; //Convierto el elemento a bytes
    int pos = buscarElemento(array, bytes , 4, sizeof(array));
    printf("%d\n",pos);
}

int buscarElemento(char* array, char* elemento, unsigned tamanioElemento, unsigned tamanioArray){
    int posicion = -1;
    int posicionActual = 0;
    int i;
    while(tamanioArray != 0){					//El while itera sobre cada posicion de memoria del array
        for(i=0; i<tamanioElemento; i++){		//El for itera byte a byte hasta que finaliza un elemento o un byte difiere
            if(*array != *elemento){			//Si uno de los bytes no coincide
                array+=(tamanioElemento-i);		//Me paro en el elemento siguiente
                elemento-=i;					//Posiciono el puntero al principio de mi elemento para volver a comparar
                break;
            }
            if(i==(tamanioElemento-1)){			//Si comparó todos los bytes correspondientes a un elemento y fueron iguales
                posicion = posicionActual;		//Encontró el elemento
            }
            array++;							//Incremento el puntero del array
            elemento++;							//Incremento el puntero del elemento (array de bytes)
        }
        posicionActual++;
        tamanioArray--;
    }

    return posicion;
}




