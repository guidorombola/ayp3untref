/*
 * ejercicio6.c
 * 
 *  Crear un procedimiento para dado dos valores del mismo tipo sus valores sean intercambien.
 */
#include <stdio.h>

int main(int argc, char **argv) {
	int valor1 = 2;
	int valor2 = 3;
	char* bytesValor1 = (char*)&valor1;
	char* bytesValor2 = (char*)&valor2;
	intercambiarValores(bytesValor1, bytesValor2, 4);
	printf("%d\n", valor1);
	printf("%d\n", valor2);

	return 0;
}

void intercambiarValores(char* valor1, char* valor2, unsigned volumenTipoEnBytes){
	char tmp;
	int i = 0;
	while(i<volumenTipoEnBytes){
		tmp = *valor1;
		*valor1 = *valor2;
		*valor2 = tmp;
		valor1++;
		valor2++;
		i++;
	}
}
