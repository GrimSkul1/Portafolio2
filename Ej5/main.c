//
// Created by Bryan on 29/11/2019.
//

#include <stdlib.h>
#include <stdio.h>
#include "fleerstrng.h"

int main(){
    char * str = NULL;
    str = (char*)malloc(sizeof(char));
    printf("Introduzca una oracion:  ");
    leer_string(str);
}