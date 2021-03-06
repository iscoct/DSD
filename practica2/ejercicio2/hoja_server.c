#include "hoja.h"
#include <string.h>

registro *baseDeDatos;
int tam = 0;

char **
alta_1_svc(registro *argp, struct svc_req *rqstp)
{
	static char * result;

	registro *aux;
	int encontrado = 0;
	int i = 0;

	while(! encontrado && i < tam) {
		if(strcmp(argp -> ip, baseDeDatos[i].ip))
			encontrado = 1;
		else
			++i;
	}

	if(! encontrado) {
		tam++;
		aux = (registro *) realloc(baseDeDatos, sizeof(registro) * tam);
		free(baseDeDatos);
		baseDeDatos = aux;

		baseDeDatos[tam - 1].ip = argp -> ip;
		baseDeDatos[tam - 1].nombre = argp -> nombre;
		
		result = "Se ha insertado con éxito la tupla";
	} else 
		result = "La ip dada ya se encuentra en la base de datos";

	printf("Nombre recibido: %s\n", argp -> nombre);
	printf("Ip recibida: %s\n", argp -> ip);
	printf("%s\n", result);
	
	return &result;
}
