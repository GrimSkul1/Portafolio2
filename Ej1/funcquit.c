//
// Created by Bryan on 30/10/2019.
//

#include "funcquit.h"

char *funcion_quit(char *arr){
    if (*arr = '!', '?', '.'){
        return arr+1;
    }else if (*arr == '\0'){
        return arr;
    } else return funcion_quit(arr+1);
}

