extern "C" {
#include "taylor_sine.h"
}
#include <math.h>
#include <stdio.h>

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    printf("With n to set to 10 and increasing\n");
    
    printf("SINE of 1\n");
    printf("ANSI C: %.9lf\n", sin(1));
    printf("MY Function: %.9lf\n\n", taylor_sine(1,10));

    printf("SINE of 60.109\n");
    printf("ANSI C: %.9lf\n", sin(60.109));
    printf("MY Function: %.9lf\n\n", taylor_sine(2.109,10));

    printf("SINE of 0.3109\n");
    printf("ANSI C: %.9lf\n", sin(0.3109));
    printf("MY Function: %.9lf\n\n", taylor_sine(0.3109,10));

    printf("SINE of 5.3109\n");
    printf("ANSI C: %.9lf\n", sin(5.3109));
    printf("MY Function: %.9lf\n\n", taylor_sine(5.3109,10));

    printf("SINE of 5.12142\n");
    printf("ANSI C: %.20f\n", sin(5.12142));
    printf("MY Function: %.20f\n\n", taylor_sine(5.12142,5));

    printf("SINE of 5.12142\n");
    printf("ANSI C: %.20f\n", sin(5.12142));
    printf("MY Function: %.20f\n\n", taylor_sine(5.12142,10));

    printf("SINE of 5.12142\n");
    printf("ANSI C: %.20f\n", sin(5.12142));
    printf("MY Function: %.20f\n\n", taylor_sine(5.12142,100));

    return 0;
}

/*1c answer*/
/* I got similar answers with low input values, with higher inputs the answers where not the same*/
/* When i lower N, the precision, the taylor series sine function also moves further away from matt. sine function */