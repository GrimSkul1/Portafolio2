//
// Created by Bryan on 29/11/2019.
//

#include "nforgn.h"
#include <stddef.h>

void sort (void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)){
    int x, y, z;
    char chge, pnt = (char)base;
    for (x=0;x<(int)(nitems*size)-1;x++){
        for (y = 0;y<(int)(nitems*size)-x-1;y+=size){
            if (compar((const void *) (base+y),base+y+size)>0){
                for (z=0;z<(int)size;z++){
                    chge=pnt[y+z];
                    pnt[y+z]=pnt[y+size+z];
                    pnt[y+size+z]=chge;
                }
            }
        }
    }
}

int charcompr (const void *num1, const void *num2){
    char comp1 = (char)num1;
    char comp2 = (char)num2;
    return comp2 - comp1;
}

int intcompr (const void *num1, const void *num2){
    int comp1 =  (int) num1;
    int comp2 =  (int) num2;
    return comp2 - comp1;
}

int floatcompr (const void *num1, const void *num2){
    float comp1 = (float) num1;
    float comp2 = (float) num2;
    return comp2 - comp1;
}