#include <stdio.h>
#include <string.h>

// Crear un procedimiento que reemplace una palabra por otra en un párrafo.

int contar_apariciones(char* str, char* wrd, unsigned strSize) {
  char* tmp[strSize]; // buffer temporal necesario porque strtok altera string
  memcpy(tmp, str, strSize);
  int count = 0;
  char* tkn = strtok(tmp, " ");
  while (tkn) {
    if (!strcmp(tkn, wrd)) {
      count++;
    }
    tkn = strtok(NULL, " ");
  }
  return count;
}

void reemplazar(char* parrafoNuevo, char* parrafoOriginal, char* reemplazo, char* aReemplazar) {
  char* token = strtok(parrafoOriginal, " ");
  while (token) {
    if (!strcmp(token, aReemplazar)) {
      strcat(parrafoNuevo, reemplazo);
      strcat(parrafoNuevo, " "); // agrego espacio en blanco despues de cada palabra
    } else {
      strcat(parrafoNuevo, token);
      strcat(parrafoNuevo, " ");
    }
    token = strtok(NULL, " ");
  }
}


int main(int argc, char const *argv[]) {
  char parrafo[] = "este es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";
  char buscada[] = "palabra";
  char reemplazo[] = "reemplazo";

  int apariciones = contar_apariciones(parrafo, buscada, sizeof(parrafo));
  char nuevo[strlen(parrafo) - strlen(buscada)*apariciones + strlen(reemplazo)*apariciones];

  memset(nuevo, '\0', sizeof(nuevo)); // inicializo en "cero" el string

  reemplazar(nuevo, parrafo, reemplazo, buscada);
  printf("%s\n", nuevo);
  return 0;
}