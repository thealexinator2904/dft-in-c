/* Functions for complex operations */
#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#ifndef _STDLIB_H_
#include <stdlib.h>
#endif

/* Macro that returns the index of position ij in a matrix with ncol */
#ifndef POS_X__Y__COLS_
#define POS(x, y, cols) (((x)*(cols))+(y))
#endif

/* Complex number struct */
typedef struct complex_num {
        double Re, Im;
}complex;

typedef unsigned long int ulint;

/* HEADERS */
complex cmult(complex z1, complex z2);
complex cadd(complex z1, complex z2);
complex csub(complex z1, complex z2);
double cmod(complex z);  
complex *cm_mult(complex *m1, ulint nl1, ulint nc1, complex *m2, ulint nl2, ulint nc2);
void cm_zero(complex *m, ulint nl, ulint nc);
complex *makecm(ulint nl, ulint nc);
        
        

#endif
