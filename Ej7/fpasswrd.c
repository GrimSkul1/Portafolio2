//
// Created by Bryan on 29/11/2019.
//

#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "fpasswrd.h"
#define CANT 25
#define FALSE 0
#define TRUE !(FALSE)

void mays_o_mins(char orac[]){
    if (isupper(orac[0]) == TRUE ){
    }else printf("\nClave empieza sin mayuscula, por favor introducir mayuscula en la primera letra de su proxima clave\n");
}

void comp_digit (char orac[]) {
    int i, c = 0;
    for (i = 0; i < strlen(orac); i++) {
        if (isdigit(orac[i]) == TRUE) {
            c++;
        }
    }
    if (c < 1)
        printf("\nClave sin numero, por favor introducir al menos un numero en su clave\n");
}

void comprbd (char orac[]) {
    if ((stricmp(orac, "password") == 0) || (stricmp(orac, "clave") == 0) ||
        (stricmp(orac, "contrasena") == 0)) {
        printf("\nClave invalida, por favor introducir otra\n");
    }
    if (strlen(orac) < 7) {
        printf("\nClave muy corta, introduzca una mas larga\n");
    } else return;
}