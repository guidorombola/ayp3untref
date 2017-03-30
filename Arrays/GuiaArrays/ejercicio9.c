/*
 * ejercicio9.c
 *
 *  Created on: Mar 27, 2017
 *      Author: alumno
 */

int main(int argc, char **argv) {	//Modificar letra

	int array[] = {1,2,4,6,2};
	float arrayf[] = {1.1,2.2,3.3};
	int posicion = 0;
	posicion = buscarElementoEnArrayDeEnteros(array, sizeof(array)/sizeof(int), 2);
	//posicion = buscarElementoEnArrayDeEnteros(arrayf, sizeof(arrayf)/sizeof(float), 2.2);
	printf("%d\n", posicion );
	return 0;

}

/*
 * Devuelve la primera aparicion de un elemento en un array de enteros
 */
int buscarElementoEnArrayDeEnteros(int* array, unsigned tamanioArray, int numeroABuscar){
	int i;
	int posicion = -1;
	for(i=0; i<tamanioArray; i++){
		if(*(array+i) == numeroABuscar){
			posicion = i;
			break;
		}
	}
	return posicion;
}

