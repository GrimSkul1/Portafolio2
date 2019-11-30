//
// Created by Bryan on 29/11/2019.
//

#ifndef PORTAFOLIONO_2_NFORGN_H
#define PORTAFOLIONO_2_NFORGN_H

#endif //PORTAFOLIONO_2_NFORGN_H

#include <stddef.h>

void sort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*));

int charcompr (const void *num1, const void *num2);

int intcompr (const void *num1, const void *num2);

int floatcompr (const void *num1, const void *num2;