/**
 * Ejercicio 7

    Generar una función que copie el contenido de un array de enteros a otro.
    Que debemos tener en cuenta al momento de realizar la copia?
    Generar una función que copie el contenido de un array de flotantes a otro.
    Puedo realizar una copia desde el array de enteros al de flotantes (utilizando estas funciones)?
    Que desventajas tiene este código? Se puede mejorar? Cómo (no es necesario hacerlo)?

#define TAMANO_DESTINO  1
int main()
{
    int origen[] = { 1,2,3,4,5,6,7,8 };
    int destino[TAMANO_DESTINO];
    int origenf[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8 };
    int destinof[TAMANO_DESTINO];

    copiar_enteros(destino, origen,  ...);
    copiar_flotantes(destinof, origenf,  ...);
}
**/



int mainc(int argc, char **argv) {

	int arrayInt1[] = {1,3,5,10,28,-2,11,0};
	int arrayInt2[8];
	float arrayFloat1[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8 };
	float arrayFloat2[8];

	int tamanioArrayInt1;
	int tamanioArrayInt2;
	int tamanioArrayFloat1;
	int tamanioArrayFloat2;

	inicializarArray(arrayInt2, sizeof(arrayInt2));
	inicializarArray(arrayFloat2, sizeof(arrayFloat2));

	tamanioArrayInt1 = sizeof(arrayInt1)/sizeof(int);
	tamanioArrayInt2 = sizeof(arrayInt2)/sizeof(int);
	tamanioArrayFloat1 = sizeof(arrayFloat1)/sizeof(float);
	tamanioArrayFloat2 = sizeof(arrayFloat2)/sizeof(float);

	copiarArrayEnteros(arrayInt1, arrayInt2, tamanioArrayInt2);
	//copiarArrayFlotantes(arrayFloat1, arrayFloat2, tamanioArrayFloat2);

	//copiarArrayEnteros(arrayInt1, arrayFloat2, tamanioArrayFloat2);

	//copiarArrayGenerico(arrayInt1, arrayInt2, sizeof(arrayInt2));

	int i;

	for(i=0; i<tamanioArrayInt2; i++){
		printf("%d\n",arrayInt2[i]);
	}

}

void copiarArrayEnteros(int* origen,int* destino, int tamanioDestino){
	int i;
	for(i=0; i<tamanioDestino; i++){
		*(destino+i) = *(origen+i);
	}
}

void copiarArrayFlotantes(float* origen, float* destino, int tamanioDestino){
	int i;
	for(i=0; i<tamanioDestino; i++){
		*(destino+i) = *(origen+i);
	}
}

/**
 * Copia el contenido del array origen al array destino byte a byte.
 */
void copiarArrayGenerico(char* origen, char* destino, unsigned volumenArrayDestino){
	while(volumenArrayDestino !=0){
		volumenArrayDestino--;
		*destino = *origen;
		destino++;
		origen++;
	}
}

void inicializarArray(char* elementos, unsigned cantidad){
	while(cantidad != 0){
		cantidad--;
		*elementos = 0x0;
		elementos++;
	}
}

void imprimirArrayInt(int tamanio, int* array){
	int i;

	for(i=0; i<tamanio; i++){
		int num = *(array+i);
		printf("%d\n",num);
	}
}



