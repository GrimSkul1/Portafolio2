//
// Created by Bryan on 1/12/2019.
//

#include "fsuper.h"
#include <string.h>

int buscar_id(struct PRODUCTOS_SUPER a, int n, int id){
    for(int i = 0; i < n; i++){
        if(a.id == id){
            return a.id;
        }else a.id++;
    }
    return 0;
}

char* buscar_nombre(struct PRODUCTOS_SUPER a, int n, char *nombre){
    for(int i=0; i<n; i++){
        if(strcmp(nombre,a.nombre) == 0){
            return a.nombre;
        }else a.nombre++;
    }
    return 0;
}

