/*
 * ejercicio6.c
 * 
 *  Crear un procedimiento para dado dos valores del mismo tipo sus valores sean intercambien.
 */
#include <stdio.h>

int main(int argc, char **argv) {
	double valor1 = 2;
	double valor2 = 3;
	//char* bytesValor1 = (char*)&valor1;
	//char* bytesValor2 = (char*)&valor2;
	intercambiarValores(&valor1, &valor2, sizeof(double));
	printf("%f\n", valor1);
	printf("%f\n", valor2);

	return 0;
}

void intercambiarValores(char* punteroAValor1, char* punteroAValor2, unsigned volumenTipoEnBytes){
	char tmp;
	int i = 0;
	while(i<volumenTipoEnBytes){
		tmp = *punteroAValor1;
		*punteroAValor1 = *punteroAValor2;
		*punteroAValor2 = tmp;
		punteroAValor1++;
		punteroAValor2++;
		i++;
	}
}
