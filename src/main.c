#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <complex.h>
#include <dft.h>
#include <string.h>

double sinc(double);
int generateFunctionData(double, double, double, double[]);

int main(int argc, char *argv[])
{
    double *function;
    int size=0;
    
    printf("this is a demostration programm for performing the DFT \n");
    size = generateFunctionData(-10, 10, 0.01, function);
    
    if(size==0)
        return 0;
    
    for(int i=0; i< size; i++)
    {
        //printf("%d: %.5f\n", i, &function[i]);
    }
}

int generateFunctionData(double start, double end, double res, double f[])
{
    int size=0;
    size = (end - start)/res;
    
    f = (double*)malloc(sizeof(double) * size);
    if(f == NULL)
        return 0;
        
    for(int i=0; i++; i<size)
    {
        f[i] = sinc(start + res*i);
        printf("%f\n", sinc(start + res*i));
    }
    return size;
}

double sinc(double x)
{
    return sin(x)/x;
}
