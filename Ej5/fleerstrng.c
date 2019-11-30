//
// Created by Bryan on 28/11/2019.
//

#include "fleerstrng.h"
#include <stdlib.h>
#include <stdio.h>

char *leer_string(char* string){
    char chr;
    int x = 0, y = 1;
    while (chr != '\n') {
        chr = getc(stdin);
        string = (char*)realloc(string, y * sizeof(char));
        string[x] = chr;
        x++;
        y++;
    }
    string[x] = '\0';

}