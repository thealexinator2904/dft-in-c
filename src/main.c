#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <complex.h>
#include <dft.h>
#include <string.h>

double sinc(double);
double* generateFunctionData(double, double, double, int*);

int main(int argc, char *argv[])
{
    double *function_t, *function_f;
    int size=0;
    
    printf("this is a demonstration programm for performing the DFT \n");
    function_t = generateFunctionData(-10, 10, 0.01, &size);
    
    if(size==0)
        return 0;
    
	
	free(function_t);
}

double sinc(double x)
{
    return sin(x)/x;
}

double* generateFunctionData(double start, double end, double res, int* size)
{
    unsigned long i;
	double* f;
    *size = (end - start)/res;
    
    f = (double*)malloc(sizeof(double) * *size);
    
	if(f == NULL)
        return 0;

    for(i=0; i<=*size; i++)
    {
        f[i] = sinc(start + res*i);
    }
	
    return f;
}


