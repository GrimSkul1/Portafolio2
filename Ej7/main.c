//
// Created by Bryan on 29/11/2019.
//

#include <stdio.h>
#include "fpasswrd.h"
#define CANT 25


int main(){
    char oracion[CANT];
    gets(oracion);
    comp_digit(oracion);
    mays_o_mins(oracion);
    comprbd(oracion);
}