/* Functions for calculating dft */
#ifndef _DFT_H_
#define _DFT_H_

#ifndef _COMPLEX_H_
#include "complex.h"
#endif

#ifndef PI
#define PI 3.1415926535897932384626433832795
#endif

/* HEADERS */
complex *dft(complex *h, ulint N);
complex *idft(complex *H, ulint N);

#endif
